#ifndef LARK_PROJECT_COMMUNICATION_H
#define LARK_PROJECT_COMMUNICATION_H


#include <string>
#include <vector>
#include "Player.h"
#include "Enemy.h"


void communication(const Player &, const Enemy &, const Enemy &, const Enemy &, const Enemy &,
                   const std::vector<std::string> &, const std::vector<std::string> &);


#endif //LARK_PROJECT_COMMUNICATION_H
