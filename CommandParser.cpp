#include "GameLoop.h"

GameLoop::CommandParser::CommandParser(Mape GameMape, Person GamePerson, Key GameKey, Exit GameExit, Maze GameMaze)
{
    this->somemape = GameMape;
    this->someperson = GamePerson;
    this->somekey = GameKey;
    this->someexit = GameExit;
    this->somemaze = GameMaze;
}

void GameLoop::CommandParser::MovePlayer()
{
    std::string DIRECTION = Press.KeyPressed();
    if (DIRECTION == "UP")
    {
        if (Collision.CanMove("Y", 1))
        {
            someperson.PositionY(1);
        }
    }
    else if (DIRECTION == "LEFT")
    {
        if (Collision.CanMove("X", -1))
        {
            someperson.PositionY(-1);
        }
    }
    else if (DIRECTION == "DOWN")
    {
        if (Collision.CanMove("Y", -1))
        {
            someperson.PositionY(-1);
        }
    }
    else if (DIRECTION == "RIGHT")
    {
        if (Collision.CanMove("X", 1))
        {
            someperson.PositionY(1);
        }
    }
}