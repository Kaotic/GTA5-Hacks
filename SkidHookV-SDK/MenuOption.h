#pragma once
#include "OriginBaseV2.h"

class menu_option : public base_option
{
    std::string left_;
    std::string menu_id_;
    originbasev2* menu_{};
    std::string desc_;
    std::function<void()> func_;
public:
    menu_option(std::string left, std::string menu_id, originbasev2* menu, std::string desc = "",
               std::function<void()> func = nullptr)
        :
    left_(std::move(left)),
    menu_id_(std::move(menu_id)),
    menu_(menu),
    desc_(std::move(desc)),
    func_(std::move(func))
    {
    }
    menu_option(const menu_option & obj) = default;
    menu_option& operator=(const menu_option & obj) = default;
    menu_option(menu_option&& obj) = default;
    menu_option& operator=(menu_option&& obj) = default;
    ~menu_option() = default;

    std::string left_text() const override
    {
        return left_;
    }

    std::string right_text() const override
    {
        return ">>";
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
            menu_->set_menu(menu_id_);
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
        return "MenuOption";
    }
};
