#pragma once
#include "EndGame.h"
#include "StartGame.h"
#include "map.h"
#include "Person.h"
#include "Objects.h"
#include "Maze.cpp"

class GameLoop
{
    public:
        void Play();
    private:

        class InputParser
        {
            public:
                InputParser(Map& GameMap, Person& GamePerson, Key& GameKey, Door& GameDoor, Maze& GameMaze);
                ~InputParser()
                {
                   delete[] Collision; 
                };
                const bool MovePlayer();
            private:

                class ButtonPress
                {
                    public:
                        const std::string KeyPressed();
                };

                class PlayerCollision
                {
                    public: 
                        PlayerCollision(Map& GameMap, Person& GamePerson, Key& GameKey, Door& GameDoor);
                        const bool CanMove(std::string coord, int value_change);
                    private:
                        std::vector<std::vector<int>> matrix;
                        Map *somemap;
                        Person *someperson;
                        Door *somedoor;
                        Key *somekey;
                };
                ButtonPress Press;
                PlayerCollision *Collision;
                Map *somemap;
                Person *someperson;
            
        };
    Map GameMap;
    Person GamePerson{GameMap};
    Key GameKey{GameMap};
    Door GameDoor{GameMap};
    Maze GameMaze{GameMap,GamePerson,GameKey,GameDoor};
    InputParser Command{GameMap, GamePerson, GameKey, GameDoor, GameMaze};
    StartGame Start;
    EndGame End;

};