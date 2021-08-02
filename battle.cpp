#include <iostream>
#include <string>
#include <vector>
#include "battle.h"
#include "Player.h"
#include "Enemy.h"

void battle(const Player &player, const Enemy &enemy1, const Enemy &enemy2, const Enemy &enemy3, const Enemy &enemy4,
            const std::vector<std::string> &singularNounNI, const std::vector<std::string> &verb) {

    std::cout << "\nYou, the " << player.getTitle() << ", are about to go into battle against a group of enemy "
              << enemy1.getName() << "." << std::endl;
    std::cout << "They are also accompanied by a " << enemy3.getName() << " group and a " << enemy4.getName()
              << " group." << std::endl;
    std::cout
            << "Before you go into battle, it would be smart to check which abilities you possess. Type \"ls\" to list your abilities (directories and files)."
            << std::endl;

    std::string input;
    while (input != "ls") {
        std::cout << "Please enter \"ls\"." << std::endl;
        std::getline(std::cin, input);
    }

    std::cout << player.getSkill1() << "\t" << player.getSkill2() << "\t" << player.getSkill3() << std::endl
              << std::endl;
    std::cout
            << "Great! Now you know what skills you have; however, you feel there is something missing, something hidden."
            << std::endl;
    std::cout << "Type \"ls -a\" to list all of your skills, including hidden ones." << std::endl;

    while (input != "ls -a") {
        std::cout << "Please enter \"ls -a\"." << std::endl;
        std::getline(std::cin, input);
    }
    std::cout << player.getSkill1() << "\t" << player.getSkill2() << "\t" << player.getSkill3() << "\t"
              << player.getSkill4() << std::endl;

    std::cout << "It seems that even you, the legendary " << player.getTitle() << ", have hidden potential."
              << std::endl;
    std::cout
            << "It is wonderful that you know the names of your skills. With that said, it might be prudent to learn what they actually do."
            << std::endl;
    std::cout
            << "Type \"ls\" with the \"-l\" and \"-a\" argument to get extra info on all of your skills. You can combine these arguments as \"-la\" or \"-al\"."
            << std::endl;

    while (input != "ls -la" && input != "ls -al") {
        std::cout << "Please enter \"ls\" with a combined \"-l\" and \"-a\" argument." << std::endl;
        std::getline(std::cin, input);
    }
    std::cout << player.getSkill1() << "\tdamages an enemy\n" << player.getSkill2() << "\tblocks an enemy attack\n"
              << player.getSkill3() << "\theals yourself\n"
              << player.getSkill4() << "\thas a random effect" << std::endl << std::endl;


    std::cout << "Now, you are ready to fight! Your wrath shall be feared!!!!!!!!!!" << std::endl;

    std::cout
            << "You decide take action first in order to gain an upper hand. To use a skill, change to that skill's directory by typing \"cd\" and the name of the skill separated by a space. What skill would you like to use?"
            << std::endl;

    int enemyCount = 4;

    while (enemyCount > 0) {

        std::cout << "Please choose a skill." << std::endl;
        std::getline(std::cin, input);

        static int verbCount = 5;
        static int nounCount = 6;

        if (input == "cd " + player.getSkill1()) {
            if (enemyCount == 4) {
                std::cout << "You, the " << player.getTitle() << ", successfully used " << player.getSkill1()
                          << " and were able to " << player.getAction() << " the group of " << enemy1.getName() << "."
                          << std::endl;
                --enemyCount;
            }
            else if (enemyCount == 3) {
                std::cout << "You, the " << player.getTitle() << ", successfully used " << player.getSkill1()
                          << " and were able to " << player.getAction() << " the " << enemy2.getName() << " group."
                          << std::endl;
                --enemyCount;
            }
            else if (enemyCount == 2) {
                std::cout << "You, the " << player.getTitle() << ", successfully used " << player.getSkill1()
                          << " and were able to " << player.getAction() << " the " << enemy3.getName() << " group."
                          << std::endl;
                --enemyCount;
            }
            else if (enemyCount == 1) {
                std::cout << "You, the " << player.getTitle() << ", successfully used " << player.getSkill1()
                          << " and were able to " << player.getAction() << " the " << enemy4.getName() << " group."
                          << std::endl;
                --enemyCount;
            }
        }
        else if (input == "cd " + player.getSkill2()) {
            std::cout << "You, the renowned and apparently cowardly " << player.getTitle()
                      << ", have decided to defend against an enemy attack. Chicken. Bawk, bawk!" << std::endl;
        }
        else if (input == "cd " + player.getSkill3()) {
            std::cout << "You, the " << player.getTitle()
                      << ", seemingly felt the need to heal yourself. To what end, it is not known, as being omniscient and omnipotent has its perks, and one of those perks is invincibility."
                      << std::endl;
        }
        else if (input == "cd " + player.getSkill4()) {
            if (enemyCount == 4) {
                std::cout << "You, the curious " << player.getTitle() << ", decide to throw a "
                          << singularNounNI[nounCount] << " at the enemy. However, it had very little effect."
                          << std::endl;
                if (nounCount < 10) {
                    ++nounCount;
                }
            }

            if (enemyCount <= 3) {
                std::cout << "You, " << player.getTitle() << ", decide to " << verb[verbCount]
                          << " the enemy. However, before you could even began to act, a " << singularNounNI[nounCount]
                          << " fell out of the sky and crushed all of your foes. Victory goes to the bold!"
                          << std::endl;
                enemyCount = 0;
                if (nounCount < 10) {
                    ++nounCount;
                }
                if (verbCount < 9) {
                    ++verbCount;
                }
            }
        }

        if (enemyCount == 4) {
            std::cout << "The group of " << enemy1.getName() << " started foolishly and futilely " << enemy1.getSkill()
                      << " you, the " << player.getTitle() << ". However, it had very little effect." << std::endl;
        }
        else if (enemyCount == 3) {
            std::cout << "The " << enemy2.getName() << " group started foolishly and futilely " << enemy2.getSkill()
                      << " you, the " << player.getTitle() << ". However, it had very little effect." << std::endl;
        }
        else if (enemyCount == 2) {
            std::cout << "The " << enemy3.getName() << " group started foolishly and futilely " << enemy3.getSkill()
                      << " you, the " << player.getTitle()
                      << ". However, it had very little effect. Will they ever learn?" << std::endl;
        }
        else if (enemyCount == 1) {
            std::cout << "The " << enemy4.getName() << " group started foolishly and futilely " << enemy4.getSkill()
                      << " you, the " << player.getTitle()
                      << ". However, it had very little effect. Evidently, they won't ever learn." << std::endl;
        }
    }

    std::cout << "You, the " << player.getTitle() << ", were able to " << player.getAction() << " all of your foes. Not that there was even the slightest bit of doubt." << std::endl;

}


