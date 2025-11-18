#include <iostream>
#include <string>
#include "Classes (cpp_hpp files)/player.hpp"
#include "Classes (cpp_hpp files)/eun_bi.hpp" // eun_bi.hpp includes waifu.hpp

int main()
{
    /*Testing*/
    // Player object Alex is created with a score of 0 and 0 affection (very sad)
    Player alex("Alex", 0, 0);
    Eun_Bi eun_bi("Eun-Bi", 30);
    eun_bi.speciality(alex.player_name_);
    std::cout << eun_bi.get_name() << ":" << std::endl;
    std::cout << eun_bi.get_score() << std::endl;
    eun_bi.score_increase(2.7f);
    std::cout << eun_bi.get_score() << std::endl;

    /*Actual Game Content*/
    int input1;
    
    std::cout << "--------------------------------" << std::endl;
    std::cout << "Would you like to meet Eun-Bi (1) or Mal-Sook (2)?\n";
    std::cin >> input1;
    
    if (input1 == 1){
        std::cout << "Great, Eun-Bi will wear a nice bikini for you!";
        exit;
    }
    else if(input1 == 2){
        std::cout << "Great, Eun-Bi will wear a nice bikini for you!";
        exit;

    }
    else{
        std::cout << "brooo wrong input, try again.";

    }
    
    std::cout << "\n--------------------------------" << std::endl;
    return 0;
    

}
