#include "GameLoop.h"
#include "InputParser.cpp"

void GameLoop::Play()
{
    Start.Draw();
    GameMaze.Draw();
    while (!GameDoor.IsUsed())
    {
        if (Command.MovePlayer())
        {
            GameMaze.Draw();
        }
    }
    End.Draw();
}