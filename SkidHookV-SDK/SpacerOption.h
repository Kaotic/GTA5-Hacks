#pragma once

class spacer_option : public base_option
{
    std::string left_;
public:
    spacer_option(std::string left)
        :
    left_(std::move(left))
    {
    }

    spacer_option(const spacer_option& obj) = default;
    spacer_option& operator=(const spacer_option& obj) = default;
    spacer_option(spacer_option&& obj) = default;
    spacer_option& operator=(spacer_option&& obj) = default;
    ~spacer_option() = default;

    std::string left_text() const override
    {
        return left_;
    }

    std::string right_text() const override
    {
        return "";
    }

    std::string description() const override
    {
        return "";
    }

    void action(const actions action) override
    {
        switch (action)
        {
        case actions::select:
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
        return "SpacerOption";
    }
};
