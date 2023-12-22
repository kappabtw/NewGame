#pragma once
#include "ObjectInterface.h"

class Key: public IObject
{
    public:
        Key(Map& GameMap):IObject(GameMap){};
        const std::string State()
        {
            return "Key";
        }
        const std::string Icon()
        {
            return "K";
        }
    
       static const int ValueInMatrix = 8;
};

class Door: public IObject
{
    public:
        Door(Map& GameMap):IObject(GameMap){};
        const std::string State()
        {
            return "Exit";
        }
        const std::string Icon()
        {
            return "E";
        }
        static const int ValueInMatrix = 9;
};