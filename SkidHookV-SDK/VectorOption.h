#pragma once

template <typename T>
class vector_option : public base_option
{
    std::string left_;
    std::vector<T> vector_;
    int current_position_;
    std::string desc_;
    std::function<void(int)> func_;
public:
    vector_option(std::string left, std::vector<T> vector, const int start_position = 0, std::string desc = "", std::function<void(int)> func = nullptr)
        :
    left_(std::move(left)),
    vector_(std::move(vector)),
    current_position_(start_position),
    desc_(std::move(desc)),
    func_(std::move(func))
    {
    }
    vector_option(const vector_option& obj) = default;
    vector_option& operator=(const vector_option& obj) = default;
    vector_option(vector_option&& obj) = default;
    vector_option& operator=(vector_option&& obj) = default;
    ~vector_option() = default;

    std::string left_text() const override
    {
        return left_;
    }

    std::string right_text() const override
    {
        std::stringstream ss; ss << vector_.at(current_position_);
        return "< " + ss.str() + " >";
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
                func_(current_position_);
            break;
        case actions::left:
            if (current_position_ > 0)
                --current_position_;
            else
                current_position_ = static_cast<int>(vector_.size()) - 1;
            break;
        case actions::right:
            if (current_position_ < static_cast<int>(vector_.size()) - 1)
                ++current_position_;
            else
                current_position_ = 0;
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
        return "VectorOption";
    }
};