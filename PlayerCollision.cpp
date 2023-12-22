#pragma once
#include "GameLoop.h"

GameLoop::InputParser::PlayerCollision::PlayerCollision(Map& GameMap, Person& GamePerson,Key& GameKey, Door& GameDoor)
{
    somemap = &GameMap;
    someperson = &GamePerson;
    somekey = &GameKey;
    somedoor = &GameDoor;
    matrix = somemap->GetMap();
}

const bool GameLoop::InputParser::PlayerCollision::CanMove(std::string coord, int value_change)
{
    int nextValue;
    if (coord == "X")
    {
        nextValue = matrix[someperson->PositionY()][(someperson->PositionX()) + value_change];
        if (nextValue == 1)
        {
            return false;
            std::cout<<"Wall";
        }
    }
    else if (coord == "Y")
    {
        nextValue = matrix[(someperson->PositionY())+value_change][someperson->PositionX()];
        if (nextValue == 1)
        {
            return false;
            std::cout<<"Wall";
        }
    }
    if (((coord == "X")||(coord == "Y")) && (!somekey->IsUsed()) && (nextValue == somedoor->ValueInMatrix))
    {
        return false;
    }
    return true;
    
}