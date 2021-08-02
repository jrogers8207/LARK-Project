#include "setup.h"
#include <iostream>
#include <string>
#include <vector>
#include <random>


void setup(std::string &playerName, std::string &playerTitle, std::vector<std::string> &singularNounI,
           std::vector<std::string> &singularNounNI,
           std::vector<std::string> &pluralNoun, std::vector<std::string> &adjective, std::vector<std::string> &verb,
           std::vector<std::string> &ingVerb) {

    //introduction
    std::cout << "Welcome to the LARK Project!" << std::endl;
    std::cout << "Before we get started, you will need to fill out this form. Sorry for the inconvenience."
              << std::endl;



    //get attributes

    //get player name
    std::cout << "Please enter your first name." << std::endl;
    std::cin >> playerName;
    //get
    std::cout << "Please enter 10 SINGULAR NOUNS that are NOT IDEAS, hitting the return/enter key after each one." << std::endl;
    for (int i = 0; i < 10; ++i) {
        singularNounNI.emplace_back("");
        std::cin >> singularNounNI[i];
    }

    std::cout << "Please enter 6 ADJECTIVES, hitting the return/enter key after each one." << std::endl;
    for (int i = 0; i < 6; ++i) {
        adjective.emplace_back("");
        std::cin >> adjective[i];
    }

    std::cout << "Please enter 5 SINGULAR NOUNS, INCLUDING IDEAS, hitting the return/enter key after each one." << std::endl;
    for (int i = 0; i < 5; ++i) {
        singularNounI.emplace_back("");
        std::cin >> singularNounI[i];
    }

    std::cout << "Please enter 9 VERBS NOT ending in \"ing\", hitting the return/enter key after each one." << std::endl;
    for (int i = 0; i < 9; ++i) {
        verb.emplace_back("");
        std::cin >> verb[i];
    }

    std::cout << "Please enter 5 PLURAL NOUNS that are NOT IDEAS, hitting the return/enter key after each one."
              << std::endl;
    for (int i = 0; i < 5; ++i) {
        pluralNoun.emplace_back("");
        std::cin >> pluralNoun[i];
    }

    std::cout << "Please enter 5 VERBS ending in \"ing\", hitting the return/enter key after each one." << std::endl;
    for (int i = 0; i < 5; ++i) {
        ingVerb.emplace_back("");
        std::cin >> ingVerb[i];
    }

    //randomize word placement
    std::random_device rd;
    std::mt19937 g(rd());

    std::shuffle(singularNounI.begin(), singularNounI.end(), g);
    std::shuffle(singularNounNI.begin(), singularNounNI.end(), g);
    std::shuffle(pluralNoun.begin(), pluralNoun.end(), g);
    std::shuffle(adjective.begin(), adjective.end(), g);
    std::shuffle(verb.begin(), verb.end(), g);
    std::shuffle(ingVerb.begin(), ingVerb.end(), g);


    singularNounI[0][0] = toupper(singularNounI[0][0]);
    singularNounI[1][0] = toupper(singularNounI[1][0]);
    adjective[0][0] = toupper(adjective[0][0]);
    adjective[1][0] = toupper(adjective[1][0]);
    adjective[2][0] = toupper(adjective[2][0]);


    playerTitle =
            adjective[0] + "-blooded, " + adjective[1] + "-blooded, " + adjective[2] + "-blooded " + singularNounI[1] +
            " " + "Slayer";

    //Explain everything
    std::cout << "\n\nWelcome to the World of " << singularNounI[0] << "." << std::endl;

    std::cout << "In this world, " << pluralNoun[0] << " wreak havoc by indiscriminately " << ingVerb[0] << "."
              << std::endl;

    std::cout << "Fortunately, there is hope, in the form of you, " << playerName << ", the " << playerTitle <<
    ", regardless of how little hope it may be." << std::endl;

    std::cout << "As a child, you were born to " << adjective[3] << " and " << adjective[4]
              << " parents who made a living by "
              << ingVerb[1] << " " << pluralNoun[2] << "." << std::endl;

    std::cout
            << "Their virtuous endeavours inspired you deeply, so deeply in fact, that you decided to follow in their footsteps and become a "
            << singularNounNI[0] << "." << std::endl;

    std::cout
            << "You were quite successful in your ventures, and enjoyed a life of luxury. However, these happy times weren't to last. Tragedy struck..."
            << std::endl;

    std::cout << "Your family too, fell victim to the " << ingVerb[0] << " of the " << pluralNoun[0] << "."
              << std::endl;

    std::cout << "Distraught and filled with rage, you decided to seek vengeance and " << verb[0] << " all of the "
              << pluralNoun[0] << " and their allies using your mastery of the Bourne Again Shell.\n" << std::endl;

    /*
    singularNounI=1
    singularNounNI=0
    pluralNoun=2
    adjective=4
    verb=0
    ingVerb=1
     */

}
