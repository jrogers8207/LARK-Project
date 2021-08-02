cmake_minimum_required(VERSION 3.17)
project(LARK_Project)

set(CMAKE_CXX_STANDARD 20)

add_executable(LARK_Project main.cpp Enemy.cpp Enemy.h Player.cpp Player.h setup.cpp setup.h lockpicking.h lockpicking.cpp scouting.cpp scouting.h communication.cpp communication.h man.cpp man.h story.cpp story.h battle.cpp battle.h)