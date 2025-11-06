#include <iostream>
#include <string>
#include "Classes (cpp_hpp files)/player.hpp"
#include "Classes (cpp_hpp files)/eun_bi.hpp" // eun_bi.hpp includes waifu.hpp

int main()
{
    // Player object Alex is created with a score of 0 and 0 affection (very sad)
    Player alex("Alex", 0, 0);
    Eun_Bi eun_bi("Eun-Bi", 30);
    eun_bi.speciality(alex.player_name_);
    std::cout << eun_bi.get_name() << ":" << std::endl;
    std::cout << eun_bi.get_score() << std::endl;
    eun_bi.score_increase(2.7f);
    std::cout << eun_bi.get_score() << std::endl;
    return 0;
}
