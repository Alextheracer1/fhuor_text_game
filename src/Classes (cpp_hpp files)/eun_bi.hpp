#pragma once
#include "waifu.hpp"

class Eun_Bi : public Waifu
{
public:
    using Waifu::Waifu;
    void speciality(const std::string &player_name) override;
};