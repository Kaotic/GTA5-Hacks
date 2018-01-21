#pragma once

#undef min
#undef max

template <typename T>
class slider_option : public base_option
{
    std::string left_;
    T* slider_;
    T min_;
    T max_;
    T step_;
    std::string desc_;
    std::function<void()> func_;
public:
    slider_option(std::string left, T* slider, T min, T max, T step, std::string desc = "",
                  std::function<void()> func = nullptr)
        :
    left_(std::move(left)),
    slider_(slider),
    min_(std::move(min)),
    max_(std::move(max)),
    step_(std::move(step)),
    desc_(std::move(desc)),
    func_(std::move(func))
    {
    }
    slider_option(const slider_option& obj) = default;
    slider_option& operator=(const slider_option& obj) = default;
    slider_option(slider_option&& obj) = default;
    slider_option& operator=(slider_option&& obj) = default;
    ~slider_option() = default;

    std::string left_text() const override
    {
        return left_;
    }

    std::string right_text() const override
    {
        std::stringstream ss;
        ss << "[" << std::setprecision(5) << min_ << " : ~g~"<< std::setprecision(5) << *slider_ << "~s~ : " << std::setprecision(5) << max_ << "]";
        return ss.str();
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
            {
                std::stringstream ss;
                ss << get_input();

                T temp_val;
                ss >> temp_val;

                if (!ss.fail())
                {
                    if (temp_val >= min_ && temp_val <= max_)
                        *slider_ = temp_val;
                }

                if (func_)
                    func_();
                break;
            }
        case actions::left:
            if (*slider_ > min_ + step_ + step_ / 10)
                *slider_ -= step_;
            else if (*slider_ > min_)
                *slider_ = min_;
            else
                *slider_ = max_;
            if (func_)
                func_();
            break;
        case actions::right:
            if (*slider_ <= max_ - step_)
                *slider_ += step_;
            else if (*slider_ < max_)
                *slider_ = max_;
            else
                *slider_ = min_;
            if (func_)
                func_();
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
        return "SliderOption";
    }
};