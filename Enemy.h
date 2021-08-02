#ifndef LARK_PROJECT_ENEMY_H
#define LARK_PROJECT_ENEMY_H

#include <string>
#include "Player.h"

class Enemy {

private:

    //enemy attributes
    std::string name; //fill with nouns
    std::string skill;   //fill with verbs


public:

    //default and argument constructor
    Enemy();

    Enemy(const std::string &, const std::string &);

    //get and set functions
    std::string getName() const;

    void setName(const std::string &);

    std::string getSkill() const;

    void setSkill(const std::string &);


};


#endif //LARK_PROJECT_ENEMY_H
