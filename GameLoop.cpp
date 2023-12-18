#include "GameLoop.h"

GameLoop::GameLoop(Mape GameMape, Person GamePerson, Key GameKey, Exit GameExit, Maze GameMaze)
{
    this->Command = new CommandParser{GameMape, GamePerson, GameKey, GameExit, GameMaze};
    /*this->somemape = GameMape;
    this->someperson = GamePerson;
    this->somekey = GameKey;
    this->someexit = GameExit;
    this->somemaze = GameMaze;*/
}

void GameLoop::StartGame()
{
    bool GameIsEnd = false;
    while (!GameIsEnd)
    {

    }
}