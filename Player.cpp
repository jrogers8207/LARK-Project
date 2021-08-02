#include "Player.h"

Player::Player() {

    name = "unknown";
    title = "unknown";
    occupation = "unknown";
    action = "unknown";
    int health = 100;

    attack = "unknown";
    defense = "unknown";
    heal = "unknown";
    random = "unknown";


}

Player::Player(const std::string &_name, const std::string &_title, const std::string &occupation, const std::string &_action, int _health, const std::string &_attack,
               const std::string &_defense, const std::string &_heal, const std::string &_random) {

    name = _name;
    title = _title;
    action = _action;
    health = _health;
    attack = _attack;
    defense = _defense;
    heal = _heal;
    random = _random;

}

std::string Player::getName() const {
    return name;
}

void Player::setName(const std::string &_name) {
    name = _name;
}

std::string Player::getTitle() const {
    return title;
}

void Player::setTitle(const std::string &_title) {
    title = _title;
}

std::string Player::getOccupation() const {
    return occupation;
}
std::string Player::getAction() const {
    return action;
}
void Player::setAction(std::string _action){

}

void Player::setOccupation(const std::string &_occupation) {
    occupation = _occupation;
}

int Player::getHealth() const {
    return health;
}

void Player::setHealth(int _health) {
    health = _health;
}

std::string Player::getSkill1() const {
    return attack;
}

std::string Player::getSkill2() const {
    return defense;
}

std::string Player::getSkill3() const {
    return heal;
}

std::string Player::getSkill4() const {
    return random;
}




