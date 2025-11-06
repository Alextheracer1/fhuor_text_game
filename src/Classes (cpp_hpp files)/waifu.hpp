#include <string>
#include <iostream>
#include <utility>
#pragma once // https://en.wikipedia.org/wiki/Pragma_once
class Waifu
{
protected:
    std::string waifu_name_;
    int age_;
    // where 0 ist no affection and 10 is high affection towards the player
    float love_score = 0;

public:
    void greeting(std::string name)
    {
        std::cout << "Hello " << name << "! My name is" << this->waifu_name_ << ". Nice to meet you!" << std::endl;
    }

    /* Player chose a good option and therefore the love score
    for this specific waifu gets increased as a reward! */
    float get_score() { return love_score; }

    float score_increase(float increase)
    {
        return love_score += increase;
    }

    std::string get_name() { return waifu_name_; }

    virtual void speciality(const std::string &player_name) = 0;

    // Constructor
    Waifu(std::string waifu_name, int age);
    // Copy-Constructor
    Waifu(const Waifu &other) = default;
    // Destructor
    virtual ~Waifu() = default;
};