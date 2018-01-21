#pragma once

class blank_option : public base_option
{
    std::string left_;
    std::string right_;
    std::string desc_;
    std::function<void()> func_;
public:
    blank_option(std::string left, std::string right, std::string desc = "", std::function<void()> func = nullptr)
        :
    left_(std::move(left)),
    right_(std::move(right)),
    desc_(std::move(desc)),
    func_(std::move(func))
    {
    }

    blank_option(const blank_option& obj) = default;
    blank_option& operator=(const blank_option& obj) = default;
    blank_option(blank_option&& obj) = default;
    blank_option& operator=(blank_option&& obj) = default;
    ~blank_option() = default;

    std::string left_text() const override
    {
        return left_;
    }

    std::string right_text() const override
    {
        return right_;
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
        return "BlankOption";
    }
};
