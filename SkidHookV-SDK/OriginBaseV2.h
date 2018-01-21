#pragma once

typedef struct
{
    int red, green, blue, alpha;
} rgba;

typedef struct
{
    float x, y;
} vec2;

class originbasev2
{
    typedef struct
    {
        rgba color;
        float size;
        int font;
        bool center;
        vec2 offset;
    } text_style;

    typedef struct
    {
        rgba color;
        float width, height;
        vec2 offset;
    } rect_style;

    typedef struct
    {
        rgba color;
        float width, height;
        float heading;
        vec2 offset;
    } sprite_style;

    typedef struct
    {
        text_style text;
        text_style side;
        rect_style rect;
    } style;

    struct menu
    {
        std::string parent_id, title, name;
        std::vector<base_option*> options;
        std::function<void()> options_function;
        int current_option{};

        menu() = default;
        menu(const menu& obj) = default;
        menu& operator=(const menu& obj) = default;
        menu(menu&& obj) = default;
        menu& operator=(menu&& obj) = default;
        ~menu();
    };

    typedef struct
    {
        int code;
        bool state;
    } key;

    class drawing
    {
    public:
        static inline void draw_rect(const rect_style& style, const vec2& coord);
        static inline void draw_text(const std::string& text, const text_style& style, const vec2& coord);
        static inline void draw_spri(const std::string& dict, const std::string& type, const sprite_style& sprite,
                                     const vec2& coord);
        static inline void draw_noti(const std::string& text);
        static inline void draw_glar(const rect_style& style, const vec2& coord);
    };


    static float get_text_height(int font, float scale);
    static float get_text_width(const std::string& text, int font, float size);
    static int grab_line_count(const text_style& style, const std::string& text, float x, float y);

    int max_vis_ = 15;
    std::map<base_option::actions, key> keys_;
    std::map<std::string, menu> menus_;

    std::string active_menu_;
    std::string main_;
    std::string parent_;
    std::string pushing_into_id_;
    std::string name_;
    bool pushing_into_menu_ = false;

    void insert_options_to_menu(const std::string& menu_id, const std::function<void()>& options);

    void draw_title(const std::string& text);
    void draw_header(const std::string& description, int current_option, int option_count);
    void draw_glare();
    void draw_option(const std::string& option, const std::string& side, int position, const std::string& style);
    void draw_spacer(const std::string& text, int position);
    void draw_footer(const std::string& description, int option_count);


	void update_keys();
	void handle_open_menu();
	static void handle_up_arrow(int* current_option, int option_count);
	static void handle_down_arrow(int* current_option, int option_count);
	void fix_width();
	menu* grab_active_menu();
	static void handle_invalid_option(int* current_option, int option_count);
	static std::vector<int> get_spacers(menu* active_menu);
	void handle_invalid_option_due_spacers(const std::vector<int>& spacers, int* current_option, int option_count);
public:
    originbasev2(std::string id, std::string parent, std::string name);
    originbasev2(const originbasev2& obj) = default;
    originbasev2& operator=(const originbasev2& obj) = default;
    originbasev2(originbasev2&& obj) = default;
    originbasev2& operator=(originbasev2&& obj) = default;
    ~originbasev2() = default;

    static void notify(const std::string& text);

    void setup_position(const vec2& pos);
    void setup(const std::string& key, const rect_style& rect = rect_style(), const text_style& text = text_style(),
               const text_style& side = text_style());
    void setup_key(const base_option::actions action, const int key);

    void set_menu(const std::string& menu);
    void set_title(const std::string& title);
    void create_menu(const std::string& menu_id, const std::string& parent_id, const std::function<void()>& options,
                     bool update_per_tick = false);

    vec2 menu_position{};
    std::map<std::string, style> styles;

    template <typename T>
    void create_option(T option)
    {
        if (!pushing_into_menu_)
            return;
        menus_[pushing_into_id_].options.push_back(option);
    }

    void process();
};
