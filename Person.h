#pragma once
#include <iostream>
#include "map.h"

class Person
{
    public:
        Person(Map& GameMap);
        const int PositionX(int Change);
        const int PositionY(int Change); 
        const std::string Icon();
    private: 
        Map* somemap;
        int pos_x;
        int pos_y;
};