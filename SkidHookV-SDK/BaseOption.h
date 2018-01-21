#pragma once

class base_option
{
public:
    base_option() = default;
    base_option(const base_option & obj) = default;
    base_option& operator=(const base_option & obj) = default;
    base_option(base_option&& obj) = default;
    base_option& operator=(base_option&& obj) = default;
    virtual ~base_option() = default;

    virtual std::string left_text() const = 0;
    virtual std::string right_text() const = 0;
    virtual std::string description() const = 0;

    enum class actions { select, right, left, up, down, open, close, top, middle, bottom };
    virtual void action(actions action) = 0;

    virtual std::string get_type() const = 0;
};
