#include <string>

#include "Enemy.h"


//enemy implementation


Enemy::Enemy() {

    name = "Unknown";
    skill = "Unknown";

}

Enemy::Enemy(const std::string &_name, const std::string &_skill) {

    name = _name;
    skill = _skill;

}


std::string Enemy::getName() const {
    return name;
}

void Enemy::setName(const std::string &_name) {
    name = _name;
}

std::string Enemy::getSkill() const {
    return skill;
}

void Enemy::setSkill(const std::string &_skill) {
    skill = _skill;
}

