#include <iostream>
#include <string>
#include "Player.h"
#include "man.h"

void man(const Player &player) {
    std::cout << "Welcome to the man(ual) pages!" << std::endl;
    std::cout << "Here, you can find information on all of your combat skills and BASH command." << std::endl;
    std::cout
            << "Would you like a tutorial on how to use the man pages? Enter 'y' to see the tutorial or 'n' to skip it."
            << std::endl;
    char choice = 0;
    while (choice != 'y' && choice != 'n') {
        std::cout << "Please enter 'y' or 'n'." << std::endl;
        std::cin >> choice;
    }

    std::string input;
    if (choice == 'y') {
        std::cout
                << "To look up the the uses of a skill or BASH command, enter man and then the name of the command or skill."
                << std::endl;
        std::cout << "As an example, to look up what the \"cat\" command does, enter \"man cat\"." << std::endl;

        while (input != "man cat") {
            std::cout << "Please enter \"man cat\"." << std::endl;
            std::cin.ignore();
            std::getline(std::cin, input);
        }
        std::cout
                << "The cat command can be used to read files. Additionally, with the use of the '>' symbol to overwrite or the '>>' symbol to add to the end, it can be used to write the contents of one files to another. "
                << std::endl;
        std::cout << "An example of using cat to overwrite another file is as follows: cat file1 > file2" << std::endl
                  << std::endl;
        std::cout
                << "Great job! It is important to note, that in an actual terminal, the description would be in much more depth and 'q' would be used to exit the page."
                << std::endl;
        std::cout << "What if you, the " << player.getTitle()
                  << ", forget the name of one of these commands or never knew it the first place?" << std::endl;
        std::cout << "Fortunately for you, the \"apropos\" command has you covered." << std::endl;
        std::cout
                << "Type apropos, then the functionality you are looking for, and a list of commands with brief descriptions will appear."
                << std::endl;
        std::cout << "That is all for this tutorial. Now you, the " << player.getTitle()
                  << ", know how to use the man pages." << std::endl;
        std::cout << "Please enter man \"insert command name here\" to look up a command or enter 'q' to quit."
                  << std::endl;
    }

    std::cin.ignore();
    while (true) {
        std::cout << "Please enter man \"insert command name here\" to look up a command or enter 'q' to quit."
                  << std::endl;
        std::getline(std::cin, input);
        if (input == "q" || input == "Q") {
            break;
        } else if (input == "man cat") {
            std::cout
                    << "The cat command can be used to read files. Additionally, with the use of the '>' symbol to overwrite or the '>>' symbol to add to the end, it can be used to write the contents of one files to another. "
                    << std::endl;
            std::cout << "An example of using cat to overwrite another file is as follows: cat file1 > file2"
                      << std::endl
                      << std::endl;
        } else if (input == "man ping") {
            std::cout
                    << "The ping command can be used to determine the stability and and response time of a server. It is used by typing \"ping\" and then either a website address or ip address."
                    << std::endl;
            std::cout
                    << "To ping a server a set amount of times, the -c argument can be used. For example, to ping google 5 times, type \"ping -c 5 google.com\"."
                    << std::endl;

        } else if (input == "man nslookup") {
            std::cout
                    << "The \"nslookup\" command can be used to look up the ip address or website address of a website by typing nslookup and then the ip address or website address."
                    << std::endl;
            std::cout
                    << "For example, to find the ip address of google.com, type \"nslookup google.com\". To find the website address of 173.213.238.107, type \"nslookup 173.213.238.107\"."
                    << std::endl;

        } else if (input == "man echo") {
            std::cout
                    << "The echo command outputs text to the terminal or a file. For example, to write the text, 'testing 123', to a file called testFile, one would type \"echo 'testing 123' > testFile\"."
                    << std::endl;
            std::cout << "To output 'testing 123' to the terminal, one would type \"echo 'testing 123'\"." << std::endl;
        } else if (input == "man ifconfig") {
            std::cout
                    << "The \"ifconfig\" command allows you to find the current network configuration of your device. To use it, type \"ifconfig\"."
                    << std::endl;

        } else if (input == "man traceroute") {
            std::cout
                    << "The \"traceroute\" command can be used to find the path data takes to reach a target server. To use it, type traceroute and then the ip address or website address of the target server."
                    << std::endl;
            std::cout
                    << "For example, to find the path data takes to steampowered.com, one would type \"traceroute steampowered.com\"."
                    << std::endl;

        } else if (input == "man chmod") {
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

        } else if (input == "man ls") {
            std::cout
                    << "The \"ls\" command lists all files in directories in the target directory. If no directory is used as an argument, the target directory will be the active directory."
                    << std::endl;
            std::cout
                    << "Using the \"-a\" argument will show all hidden files and directories, and the \"-l\" argument will show extra information about each file and directory."
                    << std::endl;
            std::cout
                    << "To use the \"ls\" command, type ls, the arguments you want to use, and then the target directory. For example, to list the files and directories in /etc/lvm, including hidden ones, type \"ls -a /etc/lvm\""
                    << std::endl;

        } else if (input == "man cd") {
            std::cout
                    << "The \"cd\" command changes the active directory. Type cd, and then the path to the directory you want to change to. For example, to change to the /etc/var directory, one would type, \"cd /etc/lvm/\"."
                    << std::endl;
            std::cout << "Typing just \"cd\" alone will change the active directory to your home directory."
                      << std::endl;
        }
    }


}
