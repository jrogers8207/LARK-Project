#include <iostream>
#include <string>
#include <vector>
#include "lockpicking.h"
#include "communication.h"
#include "scouting.h"
#include "man.h"
#include "battle.h"
#include "story.h"
#include "Player.h"
#include "Enemy.h"


void story(const Player &player, const Enemy &enemy1, const Enemy &enemy2, const Enemy &enemy3, const Enemy &enemy4,
           const std::vector<std::string> &singularNounI, const std::vector<std::string> &singularNounNI,
           const std::vector<std::string> &pluralNoun,
           const std::vector<std::string> &adjective,
           const std::vector<std::string> &verb, const std::vector<std::string> &ingVerb) {

    std::cout << " As you, " << player.getName() << ", the, " << player.getTitle()
              << ", set off on your quest for revenge, you quickly choose your first course of action." << std::endl;

    scouting(player, enemy1, enemy2, enemy3, enemy4);
    battle(player, enemy1, enemy2, enemy3, enemy4, singularNounNI, verb);
    lockpicking(player);
    communication(player, enemy1, enemy2, enemy3, enemy4, ingVerb, adjective);
    std::cout << "And with that, you decide to retire for the day, so you can fight on tomorrow. Thanks for playing!"
              << std::endl;
    std::cout
            << "If you would like to see the man pages, a catalog with descriptions of all the commands used in this game, enter 'y'. Enter anything else to head back to the main menu."
            << std::endl;
    char input;
    std::cin >> input;

    if (input == 'y'){
        man(player);
    }
}
