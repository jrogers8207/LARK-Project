#include <iostream>
#include <string>
#include <vector>
#include <ctime>

#include "Player.h"


void lockpicking(const Player &player) { // don't use enemy1

    std::cout << "\n\nAfter your successful " << player.getAction() << " attempt on your foes, you, the "
              << player.getTitle()
              << ", see that a chest has been left behind. You decide to attempt to pick the lock." << std::endl;
    std::cout
            << "In order to open the chest, you must change the permissions of it. chests, just like files, can have permissions modified using the \"chmod\" command.\n"
            << std::endl;
    std::cout << "For more info on the \"chmod\" command and file permissions, enter \"man chmod\" at anytime."
              << std::endl << std::endl;


    srand(time(NULL));
    int lockCombo = (rand() % 9)+1;

    std::string keyCode;
    std::string key;

    switch (lockCombo) {
        case 1:
            keyCode = "rwxr--r--";
            key = "chmod 744 chest";
            break;
        case 2:
            keyCode = "--xrw-r-x";
            key = "chmod 165 chest";
            break;
        case 3:
            keyCode = "-wx-w---x";
            key = "chmod 321 chest";
            break;
        case 4:
            keyCode = "rwxrwxrwx";
            key = "chmod 777 chest";
            break;
        case 5:
            keyCode = "r-x-w-rwx";
            key = "chmod 527 chest";
            break;
        case 6:
            keyCode = "r--r----x";
            key = "chmod 441 chest";
            break;
        case 7:
            keyCode = "-w-r-xr--";
            key = "chmod 254 chest";
            break;
        case 8:
            keyCode = "rwx-wx--x";
            key = "chmod 731 chest";
            break;
        case 9:
            keyCode = "r-xrw-rwx";
            key = "chmod 567 chest";
            break;
        default:
            std::cout <<"This should never happen. See case statement in lockpicking.cpp";
            break;
    }


    bool picked = false;
    std::string input;
    std::cin.ignore();
    while (!picked) {
        std::cout << "Please set the permissions of the chest to " << keyCode << " using octal format." << std::endl;
        std::getline(std::cin, input);

        if (input == "man chmod") {
            std::cout << "The \"chmod\" command can change the permissions of a file you own." << std::endl;
            std::cout
                    << "To use it, type chmod, the permissions of the file in octal format, and then the name of the file or directory."
                    << std::endl;
            std::cout
                    << "As an example, to set the permissions of a file called testFile to rwxr--r--, one would type \"chmod 744 testFile\"."
                    << std::endl;
            std::cout
                    << "For more information on the octal format and file permissions, please see here: https://www.geeksforgeeks.org/permissions-in-linux/."
                    << std::endl;

        } else if (input == key) {
            std::cout << "You successfully opened the chest!!! However, there was nothing inside except for a file.."
                      << std::endl;
            picked = true;

        } else {
            std::cout << "Try again!" << std::endl;
        }
    }


}
