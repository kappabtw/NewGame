#include "GameLoop.h"
#include "PlayerCollision.cpp"
#include "ButtonPress.cpp"

GameLoop::InputParser::InputParser(Map& GameMap, Person& GamePerson, Key &GameKey, Door& GameDoor, Maze& GameMaze)
{
    someperson = &GamePerson;
    Collision = new PlayerCollision{GameMap, GamePerson, GameKey, GameDoor};
}
const bool GameLoop::InputParser::MovePlayer()
{
    const std::string DIRECTION = Press.KeyPressed();
    if (DIRECTION == "UP")
    {
        if (Collision->CanMove("Y", -1))
        {   
            someperson->PositionY(-1);
            return true;
        }
    }
    else if (DIRECTION == "LEFT")
    {
        if (Collision->CanMove("X", -1))
        {
            someperson->PositionX(-1);
            return true;
        }
    }
    else if (DIRECTION == "DOWN")
    {
        if (Collision->CanMove("Y", 1))
        {
            someperson->PositionY(1);
            return true;
        }
    }
    else if (DIRECTION == "RIGHT")
    {
        if (Collision->CanMove("X", 1))
        {
            someperson->PositionX(1);
            return true;
        }
    }
    else if (DIRECTION == "EXIT")
    {
        exit(0);
    }
    return false;
}