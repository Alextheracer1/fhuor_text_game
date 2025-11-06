#pragma once
#include <string>
#include <iostream>
#include <utility>
class Player
{
private:
    // How much affection has the player gained in a section overall? This will be our score!
    int score_ = 0;
    // counts how many decisions the player has already made, starts at 0
    int number_of_decisions_ = 0;

public:
    const std::string player_name_;
    // Constructor
    Player(std::string player_name, int score, int number_of_decisions);
    // Destructor
    Player(const Player &other) = default;
    // Copy-Constructor
    virtual ~Player() = default;

    int get_score() { return score_; }
    int get_nof() { return number_of_decisions_; }
};