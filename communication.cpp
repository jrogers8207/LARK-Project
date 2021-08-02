#include "communication.h"
#include <iostream>
#include <string>
#include <vector>


void
communication(const Player &player, const Enemy &enemy1, const Enemy &enemy2, const Enemy &enemy3, const Enemy &enemy4,
              const std::vector<std::string> &ingVerb, const std::vector<std::string> &adjective) {

    std::cout << "You, " << player.getName() << ", the " << player.getTitle()
              << ", have intercepted a message from a group of enemy " << enemy1.getName() << "."
              << "However, it is sealed in a file such that you, the " << player.getTitle()
              << ", are unable to read it through normal means." << std::endl;
    std::cout << "Fortunately, you, being the " << player.getTitle() << " have \"unusual\" methods that you, the "
              << player.getTitle() << ", picked up in your career as a " << player.getOccupation() << "." << std::endl;
    std::cout << "With the power of the cat command, you, the legendary(?) " << player.getTitle()
              << ", are able to print the contents of a file to a terminal." << std::endl;
    std::cout << "To read the file named message, enter the following: cat message." << std::endl;

    std::string input;
    while (input != "cat message") {
        std::cout << "Please enter \"cat message\"." << std::endl;
        std::getline(std::cin, input);
    }
    std::cout << "The person with the really long and stupid title is approaching. While they may seem to be "
              << adjective[5] << ", they are actually quite " << adjective[6] << ", so be wary.\n" << std::endl;
    std::cout << "You, the " << player.getTitle()
              << ", despite your omnipotence, still would prefer to have the element of surprise." << std::endl;
    std::cout << "Thus, you, the " << player.getTitle()
              << ", decide to modify the message file using the \"echo\" command." << std::endl;
    std::cout
            << "To replace a message, type the following: echo \"'insert message here with single quotes'\" > message."
            << std::endl;
    std::cout << "You want to trick the enemy " << enemy1.getName()
              << " into thinking you are not there, so type this specifically: echo 'The person with the awesome title was seen heading in the opposite direction from here.' > message."
              << std::endl;

    while (input !=
           "echo 'The person with the awesome title was seen heading in the opposite direction from here.' > message") {
        std::cout
                << "Please enter \"echo 'The person with the awesome title was seen heading in the opposite direction from here.' > message.\""
                << std::endl;
        std::getline(std::cin, input);
    }
    while (input != "cat message") {
        std::cout << "Now use the \"cat\" command to see the new contents of the file." << std::endl;
        std::getline(std::cin, input);
    }
    std::cout << "The person with the awesome title was seen heading in the opposite direction of here." << std::endl;


    std::cout << "Oops, you, the " << player.getTitle()
              << ", forgot to add a very important part to the message. That part being: \"There is no need to be wary.\""
              << std::endl;
    std::cout
            << "Fortunately for your forgetful self, it is possible to use the \"echo\" command to add on to the end of the message file instead."
            << std::endl;
    std::cout
            << "To add on to the end of the message, enter the following: echo 'There is no need to be wary.' >> message."
            << std::endl;
    while (input != "echo 'There is no need to be wary.' >> message") {
        std::cout << "Please enter \"echo 'There is no need to be wary.' >> message\"." << std::endl;
        std::getline(std::cin, input);
    }

    while (input != "cat message") {
        std::cout << "Now use the \"cat\" command to see the new contents of the file." << std::endl;
        std::getline(std::cin, input);
    }
    std::cout
            << "The person with the awesome title was seen heading in the opposite direction of here." << std::endl << "There is no need to be wary."
            << std::endl << std::endl;
    std::cout << "As soon as the letter is sent, you, the " << player.getTitle() << ", will have successfully tricked the enemy " << enemy1.getName() << ". Great job!"<<  std::endl;



}
