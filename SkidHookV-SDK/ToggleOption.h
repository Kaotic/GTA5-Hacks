#pragma once

class toggle_option : public base_option
{
    std::string left_;
    bool* toggle_;
    std::string desc_;
    std::function<void()> func_;
public:
    toggle_option(std::string left, bool* toggle, std::string desc = "",
                 std::function<void()> func = nullptr)
        :
    left_(std::move(left)),
    toggle_(toggle),
    desc_(std::move(desc)),
    func_(std::move(func))
    {
    }
    toggle_option(const toggle_option& obj) = default;
    toggle_option& operator=(const toggle_option& obj) = default;
    toggle_option(toggle_option&& obj) = default;
    toggle_option& operator=(toggle_option&& obj) = default;
    ~toggle_option() = default;

    std::string left_text() const override
    {
        return left_;
    }

    std::string right_text() const override
    {
		return *toggle_ ? "~g~Oui" : "~r~Non";
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
            *toggle_ ^= true;
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
        return "ToggleOption";
    }
};
