#pragma once
#include "ObjectInterface.h"

class Key: public IObject
{
    public:
        Key(Mape GameMape):IObject(GameMape){};
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

class Exit: public IObject
{
    public:
        Exit(Mape GameMape):IObject(GameMape){};
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