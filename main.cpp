#include <iostream>
#include <string>
#include <vector>
#include "setup.h"
#include "lockpicking.h"
#include "communication.h"
#include "scouting.h"
#include "man.h"
#include "battle.h"
#include "story.h"
#include "Player.h"
#include "Enemy.h"

int main() {

    //setup variables
    std::string playerName; //player's name
    std::string playerTitle;
    std::vector<std::string> singularNounI; //ideas
    std::vector<std::string> singularNounNI; // no ideas
    std::vector<std::string> pluralNoun;
    std::vector<std::string> adjective;
    std::vector<std::string> verb;
    std::vector<std::string> ingVerb;


    //start madlib
    setup(playerName, playerTitle, singularNounI, singularNounNI, pluralNoun, adjective, verb, ingVerb);

//Player object
    Player player(playerName, playerTitle, singularNounNI[0], verb[0], 100, verb[1], verb[2], verb[3], "." + verb[4]);



//Enemy Objects
    Enemy enemy1;
    enemy1.setName(pluralNoun[0]);
    enemy1.setSkill(ingVerb[0]);

    Enemy enemy2;
    enemy2.setName(singularNounNI[2]);
    enemy2.setSkill(ingVerb[2]);

    Enemy enemy3;
    enemy3.setName(singularNounNI[3]);
    enemy3.setSkill(ingVerb[3]);

    Enemy enemy4;
    enemy4.setName(singularNounNI[4]);
    enemy4.setSkill(ingVerb[4]);


    std::cout << "\nNow that you know the story of this world, what would you like to do?\n" << std::endl;


    bool running = true;
    char input;


    while (running) {
        std::cout
                << "Press 1 for story mode, 2 for lockpicking (learn about file permissions), 3 to communicate (reading files and writing to files), 4 to scout (learn about network utilities), 5 to learn how to use your skills (learn about and use the man-pages), 6 to battle (directory navigation), or 7 to quit."
                << std::endl;
        std::cin >> input;

        switch (input) {
            case '1':
                story(player, enemy1, enemy2, enemy3, enemy4, singularNounI, singularNounNI, pluralNoun, adjective, verb, ingVerb);
                break;
            case '2':
                lockpicking(player);
                break;
            case '3':
                communication(player, enemy1, enemy2, enemy3, enemy4, ingVerb, adjective);
                break;
            case '4':
                scouting(player, enemy1, enemy2, enemy3, enemy4);
                break;
            case '5':
                man(player);
                break;
            case '6': {
                battle(player, enemy1, enemy2, enemy3, enemy4, singularNounNI, verb);
                break;
            }
            case '7':
                std::cout << "Thanks for playing!" << std::endl;
                running = false;
                break;
            default:
                std::cout << "Please enter a valid input." << std::endl;
                break;
        }
    }
    return 0;
}
