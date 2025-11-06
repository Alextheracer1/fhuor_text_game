#include "player.hpp"
// Constructor Definition
Player::Player(std::string player_name, int score, int number_of_decisions) : player_name_{player_name},
                                                                              score_{score},
                                                                              number_of_decisions_{number_of_decisions} {}