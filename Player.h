#ifndef LARK_PROJECT_PLAYER_H
#define LARK_PROJECT_PLAYER_H

#include <string>


class Player {

private:

    std::string name;
    std::string title;
    std::string occupation;
    std::string action;
    int health;

    std::string attack;
    std::string defense;
    std::string heal;
    std::string random;

public:

    Player();

    Player(const std::string &, const std::string &, const std::string &, const std::string &, int, const std::string &,
           const std::string &,
           const std::string &, const std::string &);

    std::string getName() const;

    void setName(const std::string &);

    std::string getTitle() const;

    void setTitle(const std::string &_title);

    std::string getOccupation() const;

    void setOccupation(const std::string &);

    std::string getAction() const;

    void setAction(std::string _action);

    int getHealth() const;

    void setHealth(int);

    std::string getSkill1() const;

    std::string getSkill2() const;

    std::string getSkill3() const;

    std::string getSkill4() const;


};

#endif //LARK_PROJECT_PLAYER_H
