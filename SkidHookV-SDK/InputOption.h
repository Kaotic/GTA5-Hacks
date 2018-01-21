#pragma once

static std::string get_input()
{
    natives::gameplay::display_onscreen_keyboard(true, "", "", "", "", "", "", 32);
    while (!natives::gameplay::update_onscreen_keyboard())
    {
        natives::controls::disable_all_control_actions(0);
        wait(0);
    }
    if (!natives::gameplay::get_onscreen_keyboard_result())
        return "";
    return natives::gameplay::get_onscreen_keyboard_result();
}

class input_option : public base_option
{
    std::string left_;
    std::string* str_;
    std::string desc_;
    std::function<void()> func_;
public:
    input_option(std::string left, std::string* str, std::string desc = "", std::function<void()> func = nullptr)
        :
    left_(std::move(left)),
    str_(str),
    desc_(std::move(desc)),
    func_(std::move(func))
    {
    }
    input_option(const input_option & obj) = default;
    input_option& operator=(const input_option & obj) = default;
    input_option(input_option&& obj) = default;
    input_option& operator=(input_option&& obj) = default;
    ~input_option() = default;

    std::string left_text() const override
    {
        return left_;
    }

    std::string right_text() const override
    {
        return "_>";
    }

    std::string description() const override
    {
        return desc_;
    }

    void action(const actions action) override
    {
        switch (action)
        {
        case actions::select:

            *str_ = get_input();

            if (func_)
                func_();
            break;
        case actions::left:
            break;
        case actions::right:
            break;
        case actions::up:
            break;
        case actions::down:
            break;
        case actions::open:
            break;
        case actions::close:
            break;
        case actions::top:
            break;
        case actions::middle:
            break;
        case actions::bottom:
            break;
        }
    }

    std::string get_type() const override
    {
        return "InputOption";
    }
};
