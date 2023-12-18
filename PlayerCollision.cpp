#include "GameLoop.h"

GameLoop::CommandParser::PlayerCollision::PlayerCollision(Mape GameMape, Person GamePerson, Exit GameExit)
{
    somemape = GameMape;
    someperson = GamePerson;
    someexit = GameExit;
    matrix = somemape.GetMape();
}

const bool GameLoop::CommandParser::PlayerCollision::CanMove(std::string coord, int value_change)
{
    int nextValue;
    if (coord == "X")
    {
        nextValue = matrix[someperson.PositionY()][someperson.PositionX() + value_change];
        if (nextValue == 1)
        {
            return false;
        }
    }
    else if (coord == "Y")
    {
        nextValue = matrix[someperson.PositionY()+value_change][someperson.PositionX()];
        if (nextValue == 1)
        {
            return false;
        }
    }
    if (((coord == "X")||(coord == "Y"))&(someexit.IsUsed() == true) & (nextValue == someexit.ValueInMatrix))
    {
        return false;
    }
    return true;
    
}