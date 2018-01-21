#include "stdafx.h"

float originbasev2::get_text_height(const int font, const float scale)
{
    static const float arr[] = {0.08f, 0.066f, 0.072f, 0.094f, 0.072f, 0.094f, 0.072f, 0.06f};

    return (font < 0 || font > 7) ? 0.f : arr[font] * scale;
}

float originbasev2::get_text_width(const std::string& text, const int font, const float size)
{
    natives::ui::_begin_text_command_width("STRING");
    natives::ui::set_text_font(font);
    natives::ui::set_text_scale(size, size);
    natives::ui::add_text_component_substring_player_name(text.c_str());
    return natives::ui::_end_text_command_get_width(true);
}

int originbasev2::grab_line_count(const text_style& style, const std::string& text, float x, float y)
{
    natives::ui::_begin_text_command_line_count("STRING");
    natives::ui::set_text_font(style.font);
    natives::ui::set_text_scale(style.size, style.size);
    natives::ui::set_text_wrap(x, y);
    natives::ui::add_text_component_substring_player_name(text.c_str());
    return natives::ui::_get_text_screen_line_count(x, y);
}

originbasev2::originbasev2(std::string id, std::string parent, std::string name)
    :
    active_menu_(std::move(parent)),
    main_(std::move(id)),
    parent_(active_menu_),
    name_(std::move(name))
{
    // setting default values
    setup_key(base_option::actions::open, VK_NUMPAD7);
    setup_key(base_option::actions::close, VK_NUMPAD0);
    setup_key(base_option::actions::select, VK_NUMPAD5);
    setup_key(base_option::actions::left, VK_NUMPAD4);
    setup_key(base_option::actions::right, VK_NUMPAD6);
    setup_key(base_option::actions::up, VK_NUMPAD8);
    setup_key(base_option::actions::down, VK_NUMPAD2);
    setup_key(base_option::actions::top, VK_NUMPAD9);
    setup_key(base_option::actions::middle, VK_NUMPAD1);
    setup_key(base_option::actions::bottom, VK_NUMPAD3);

    setup_position({ 0.4f, 0.0657f });

    setup(
		"title", 
		{ // rect
			{ // rgba
				255, 0, 0, 150
			}, 
			0.2255f, // width
			0.0994f, // height
			{ // offset
				0.f, 0.f
			}
		},
		{ // text
    		{ // rgba
    			255,255,255, 255
    		}, 
    		1.f, // size
    		1, // font
    		true, // center
    		{ // offset
    			0.f, 0.f 
    		}
		});

    setup(
		"header",
		{ // rect
			{ // rgba
				0, 0, 0, 190
			},
			0.2255f, // width
			0.0347f, // height
			{ // offset
				0.f, 0.f 
			} 
		},
		{ // text
    		{ // rgba
    			0, 210, 255, 255
    		},
    		0.35f, // size
    		0, // font
    		false, // center
    		{ // offset 
    			0.f, 0.f 
    		} 
		});

    setup(
		"inactive_option", 
		{ // rect
			{ // rgba
				0, 0, 0, 130
			},
			0.2255f, // width
			0.0349f, // height
			{ // offset 
				0.f, 0.0002f 
			} 
		},
		{ // text
    		{ // rgba
    			255, 255, 255, 255
    		}, 
    		0.3f, // size 
    		0, // font
    		false, // center
    		{ // offset 
    			0.f, 0.f 
    		} 
		}, 
		{ // text
			{ // rgba
				0, 210, 255, 255
			},
			0.3f, // size 
			0, // font
			false, // center
			{ // offset 
				0.f, 0.f 
			}
		});

    setup(
		"active_option", 
		{ // rect
			{ // rgba
				255, 255, 255, 170
			},
			0.2255f, // width
			0.0349f, // height
			{ // offset
				0.f, 0.0002f
			} 
		},
		{ // text
			{ // rgba
				0, 0, 0, 255
			},
			0.3f, // size 
			0, // font
			false, // center
			{ // offset
				0.f, 0.f 
			} 
		}, 
		{ // text 
			{ // rgba
				0, 210, 255, 255
			},
			0.3f, // size 
			0, // font
			false, // center
			{ // offset 
				0.f, 0.f 
			} 
		});

    setup(
		"spacer",
		{ // rect
			{ // rgba
				0, 0, 0, 130
			},
			0.2255f, // width
			0.0349f, // height
			{ // offset
				0.f, 0.0002f
			} 
		}, 
		{ // text 
			{ // rgba
				0, 210, 255, 255
			}, 
			0.4f, // size 
			1, // font 
			true, // center
			{ // offset
				0.f, 0.f 
			}
		});

    setup(
		"footer", 
		{ // rect
			{ // rgba
				0, 0, 0, 190
			}, 
			0.2255f, // width
			0.0349f, // height
			{ // offset
				0.f, 0.0002f 
			} 
		}, 
		{ // text 
			{ // rgba
				0, 210, 255, 255
			},
			0.3f, // size 
			0, // font
			false, // center
			{ // offset
				0.f, 0.f
			}
		});
}

void originbasev2::notify(const std::string& text)
{
    drawing::draw_noti(text);
}

void originbasev2::setup_position(const vec2& pos)
{
    menu_position = pos;
}

void originbasev2::setup(const std::string& key, const rect_style& rect, const text_style& text, const text_style& side)
{
    styles[key] = {text, side, rect};
}

void originbasev2::setup_key(const base_option::actions action, const int key)
{
    keys_[action] = {key, false};
}

void originbasev2::insert_options_to_menu(const std::string& menu_id, const std::function<void()>& options)
{
    for (auto& option : menus_[menu_id].options)
        delete option;
    menus_[menu_id].options.clear();

    pushing_into_menu_ = true;
    pushing_into_id_ = menu_id;
    options();
    pushing_into_menu_ = false;
}

void originbasev2::draw_title(const std::string& text)
{
    drawing::draw_rect(styles["title"].rect, menu_position);

    drawing::draw_text(text, styles["title"].text, {
		menu_position.x,
    	menu_position.y - styles["title"].text.size / 35
    });
}

void originbasev2::draw_header(const std::string& description, const int current_option, const int option_count)
{
    drawing::draw_rect(styles["header"].rect, {
        menu_position.x, 
    	menu_position.y + styles["title"].rect.height / 2 + styles["header"].rect.height / 2
    });

    auto desc = description;
    for (auto& c : desc)
        c = toupper(c);
    drawing::draw_text(desc, styles["header"].text, {
        menu_position.x - styles["header"].rect.width / 2.1f,
        menu_position.y + styles["title"].rect.height / 2 + styles["header"].rect.height / 2 - styles["header"]
                                                                                               .text.size / 25
    });

    const auto counter = std::to_string(current_option + 1) + " / " + std::to_string(option_count);
    drawing::draw_text(counter, styles["header"].text, {
        menu_position.x + styles["header"].rect.width / 2.1f - get_text_width(
            counter, styles["header"].text.font, styles["header"].text.size),
        menu_position.y + styles["title"].rect.height / 2 + styles["header"].rect.height / 2 - styles["header"]
                                                                                               .text.size / 25
    });
}

void originbasev2::draw_glare()
{
    drawing::draw_glar(styles["glare"].rect, menu_position);
}

void originbasev2::draw_option(const std::string& option, const std::string& side, const int position,
                             const std::string& style)
{
    drawing::draw_text(option, styles[style].text, {
        menu_position.x - styles[style].rect.width / 2.1f,
        menu_position.y + styles["title"].rect.height / 2 + styles["header"].rect.height + styles[style].rect.height / 2
        + styles[style].rect.height * position - styles[style].text.size / 25
    });

    drawing::draw_text(side, styles[style].side, {
        menu_position.x + styles[style].rect.width / 2.1f - get_text_width(
            side, styles[style].text.font, styles[style].text.size),
        menu_position.y + styles["title"].rect.height / 2 + styles["header"].rect.height + styles[style].rect.height / 2
        + styles[style].rect.height * position - styles[style].text.size / 25
    });

    drawing::draw_rect(styles[style].rect, {
        menu_position.x,
        menu_position.y + styles["title"].rect.height / 2 + styles["header"].rect.height / 2 + styles[style].rect.height
        + styles[style].rect.height * position
    });
}

void originbasev2::draw_spacer(const std::string& text, const int position)
{
    drawing::draw_text(text, styles["spacer"].text, {
        menu_position.x,
        menu_position.y + styles["title"].rect.height / 2 + styles["header"].rect.height + styles["inactive_option"]
                                                                                           .rect.height / 2
        + styles["inactive_option"].rect.height * position - styles["spacer"].text.size / 25
    });

    drawing::draw_rect(styles["spacer"].rect, {
        menu_position.x,
        menu_position.y + styles["title"].rect.height / 2 + styles["header"].rect.height / 2 + styles["inactive_option"]
                                                                                               .rect.height
        + styles["inactive_option"].rect.height * position
    });
}

void originbasev2::draw_footer(const std::string& description, const int option_count)
{
    const auto draw_pos = option_count > max_vis_ ? max_vis_ : option_count;

    const auto x = menu_position.x - styles["inactive_option"].rect.width / 2.1f, y = menu_position.x + styles[
                   "inactive_option"].rect.width / 2.1f;
    natives::ui::set_text_wrap(x, y);
    drawing::draw_text(description, styles["footer"].text, {
        menu_position.x - styles["inactive_option"].rect.width / 2.1f,
        menu_position.y + styles["title"].rect.height / 2 + styles["header"].rect.height + styles["inactive_option"]
                                                                                           .rect.height / 2 + styles[
            "inactive_option"].rect.height * draw_pos - styles["inactive_option"].text.size / 25
    });

    auto line_count = grab_line_count(styles["footer"].text, description, x, y);
    if (line_count == 0)
        line_count = 1;
    const auto extra_height = (line_count - 1) *
        get_text_height(styles["footer"].text.font, styles["footer"].text.size);
    const auto height = styles["footer"].rect.height + extra_height;
    drawing::draw_rect({
		styles["footer"].rect.color, 
    	styles["footer"].rect.width,
    	height, 
    	styles["footer"].rect.offset},
        {
            menu_position.x,
            menu_position.y + styles["title"].rect.height / 2 + styles["header"].rect.height / 2 + styles
            ["inactive_option"].rect.height / 2 + styles["inactive_option"].rect.height * draw_pos +
            height / 2
         });
}

void originbasev2::fix_width()
{
    // handling a possibly changing menu width
    constexpr auto aspect_16_x_9 = 1.777778f;
    static const auto menu_16_x_9_width = styles["title"].rect.width; // 0.2255f;
    static const auto aspect_16_x_9_val = aspect_16_x_9 * menu_16_x_9_width;
    const auto aspect_ratio = natives::graphics::_get_aspect_ratio(true);
    const auto width = aspect_16_x_9_val / aspect_ratio;
    for (auto & style : styles)
        style.second.rect.width = width;
}

void originbasev2::update_keys()
{
	static auto ticker = GetTickCount();
	for (auto& key : keys_)
		if ((key.second.state = is_key_pressed(key.second.code) && GetTickCount() - ticker > 150))
			ticker = GetTickCount();
}

void originbasev2::handle_open_menu()
{
	static auto previous = main_;
	if (active_menu_ != parent_)
	{
		previous = active_menu_;
		active_menu_ = parent_;
	}
	else
		active_menu_ = previous;
}

void originbasev2::handle_up_arrow(int* current_option, const int option_count)
{
	if (*current_option == 0)
		*current_option = option_count - 1;
	else
		--*current_option;
}

void originbasev2::handle_down_arrow(int* current_option, const int option_count)
{
	if (*current_option == option_count - 1)
		*current_option = 0;
	else
		++*current_option;
}

originbasev2::menu* originbasev2::grab_active_menu()
{
	return &menus_[active_menu_];
}

void originbasev2::handle_invalid_option(int* current_option, const int option_count)
{
	if (*current_option >= option_count)
		*current_option = option_count - 1;
	else if (*current_option < 0)
		*current_option = 0;
}

std::vector<int> originbasev2::get_spacers(menu* active_menu)
{
	std::vector<int> spacers;
	for (auto i = 0; i < static_cast<int>(active_menu->options.size()); ++i)
		if (active_menu->options[i]->get_type() == "SpacerOption")
			spacers.push_back(i);
	return spacers;
}

void originbasev2::handle_invalid_option_due_spacers(const std::vector<int>& spacers, int* current_option, const int option_count)
{
	const auto up = keys_[base_option::actions::up].state;
	while (true)
	{
		if (std::find(spacers.begin(), spacers.end(), *current_option) != spacers.end())
		{
			if (up)
				--*current_option;
			else
				++*current_option;

			if (*current_option == option_count && !up)
				*current_option = 0;
			else if (*current_option == -1 && up)
				*current_option = option_count - 1;
		}
		else
			break;
	}
}

void originbasev2::set_menu(const std::string& menu)
{
    active_menu_ = menu;
}

void originbasev2::set_title(const std::string& title)
{
    if (!pushing_into_menu_)
        return;
    menus_[pushing_into_id_].title = title;
}

void originbasev2::create_menu(const std::string& menu_id, const std::string& parent_id,
                             const std::function<void()>& options, bool update_per_tick)
{
    if (!menus_.count(menu_id))
    {
        menus_[menu_id] = menu();
        menus_[menu_id].current_option = 0;
    }

    menus_[menu_id].parent_id = parent_id;
    menus_[menu_id].options_function = update_per_tick ? options : nullptr;

    insert_options_to_menu(menu_id, options);
}

void originbasev2::process()
{
    // handle keys
	update_keys();

    // if user presses open key
	if (keys_[base_option::actions::open].state)
		handle_open_menu();

    if (active_menu_ != parent_)
    {
        fix_width();

		const auto active_sub = grab_active_menu();

        if (active_sub->options_function)
            insert_options_to_menu(active_menu_, active_sub->options_function);

        const auto current_option = &active_sub->current_option;
        const auto option_count = static_cast<int>(active_sub->options.size());

		handle_invalid_option(current_option, option_count);

		if (keys_[base_option::actions::up].state)
			handle_up_arrow(current_option, option_count);

		else if (keys_[base_option::actions::down].state)
			handle_down_arrow(current_option, option_count);

        else if (keys_[base_option::actions::close].state)
            active_menu_ = active_sub->parent_id;

        else if (keys_[base_option::actions::top].state)
            *current_option = 0;

        else if (keys_[base_option::actions::middle].state)
            *current_option = static_cast<int>(option_count / 2);

        else if (keys_[base_option::actions::bottom].state)
            *current_option = option_count - 1;

		handle_invalid_option_due_spacers(get_spacers(active_sub), current_option, option_count);

        draw_title(name_);
        draw_header(active_sub->title, *current_option, option_count);

		std::string active_description;
        for (auto i = 0; i < static_cast<int>(active_sub->options.size()); ++i)
        {
            const auto option = active_sub->options.at(i);
            const auto color = i == *current_option ? "active_option" : "inactive_option";

            if (option->get_type() == "SpacerOption")
            {
                draw_spacer(option->left_text(), i);
                continue;
            }

            if ((*current_option + 1 <= max_vis_ / 2 || max_vis_ >= option_count) && i + 1 <= max_vis_)
            {
                draw_option(option->left_text(), option->right_text(), i, color);
            }
            else if (i >= option_count - max_vis_ && *current_option >= option_count - max_vis_ / 2)
            {
                draw_option(option->left_text(), option->right_text(), max_vis_ - option_count + i, color);
            }
            else if (*current_option + 1 >= max_vis_ / 2 && i >= *current_option - max_vis_ / 2 && i + 1 - max_vis_ % 2
                <=
                *current_option + max_vis_ / 2 && *current_option + 1 <= option_count - max_vis_ / 2)
            {
                draw_option(option->left_text(), option->right_text(), i - *current_option + max_vis_ / 2, color);
            }

            if (*current_option == i)
            {
                for (auto& key : keys_)
                    if (key.second.state)
                        option->action(key.first);
                active_description = option->description();
            }
        }

        draw_footer(active_description, option_count);
    }
}

void originbasev2::drawing::draw_rect(const rect_style& style, const vec2& coord)
{
    natives::graphics::draw_rect(coord.x + style.offset.x, coord.y + style.offset.y, style.width, style.height,
                             style.color.red, style.color.green, style.color.blue, style.color.alpha);
}

void originbasev2::drawing::draw_text(const std::string& text, const text_style& style, const vec2& coord)
{
    natives::ui::set_text_centre(style.center);
    natives::ui::set_text_colour(style.color.red, style.color.green, style.color.blue, style.color.alpha);
    natives::ui::set_text_font(style.font);
    natives::ui::set_text_scale(style.size, style.size);
    natives::ui::begin_text_command_display_text("STRING");
    natives::ui::add_text_component_substring_player_name(text.c_str());
    natives::ui::end_text_command_display_text(coord.x + style.offset.x, coord.y + style.offset.y);
}

inline void originbasev2::drawing::draw_spri(const std::string& dict, const std::string& type, const sprite_style& sprite,
                                           const vec2& coord)
{
    if (!natives::graphics::has_streamed_texture_dict_loaded(dict.c_str()))
        natives::graphics::request_streamed_texture_dict(dict.c_str(), false);
    else
        natives::graphics::draw_sprite(dict.c_str(), type.c_str(), coord.x + sprite.offset.x,
                                   coord.y + sprite.offset.y, sprite.width, sprite.height, sprite.heading,
                                   sprite.color.red,
                                   sprite.color.green, sprite.color.blue, sprite.color.alpha);
}

void originbasev2::drawing::draw_noti(const std::string& text)
{
    natives::ui::_set_notification_text_entry("STRING");
    natives::ui::add_text_component_substring_player_name(text.c_str());
    natives::ui::_set_notification_message_clan_tag_2("CHAR_BANK_MAZE", "CHAR_BANK_MAZE", true, 5, "Kaotic Hook",
                                                  "", 1.f, "", 5, 0);
    natives::ui::_draw_notification(false, false);
}

inline void originbasev2::drawing::draw_glar(const rect_style& style, const vec2& coord)
{
    static auto glare_dir = 0.f;
    const auto rot = natives::cam::_get_gameplay_cam_rot(2);
    const auto dir = rot.z / 360 * rot.z;
    const auto glare_handle = natives::graphics::request_scaleform_movie("MP_MENU_GLARE");

    //if ((glare_dir == 0 || glare_dir - dir > 0.5f) || glare_dir - dir < -0.5f)
    //{
        glare_dir = dir;

        natives::graphics::begin_scaleform_movie_method(glare_handle, "SET_DATA_SLOT");
        natives::graphics::_add_scaleform_movie_method_parameter_float(glare_dir);
        natives::graphics::end_scaleform_movie_method();
    //}
    
    natives::graphics::draw_scaleform_movie(glare_handle, coord.x + style.offset.x, coord.y + style.offset.y, style.width,
                                        style.height, style.color.red, style.color.green, style.color.blue,
                                        style.color.alpha, 0);
}

originbasev2::menu::~menu()
{
    for (auto& option : options)
        delete option;
}
