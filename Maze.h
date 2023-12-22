#pragma once
#include "UI.h"
#include "map.cpp"
#include "Person.cpp"
#include "Objects.h"

struct ValuesInMatrix
{
    static const int wallValue = 1;
    static const int voidValue = 0;
    static const int startPersonPosValue = 3;
};  

struct Icons
{
    const char wallIcon = '1';
    const char voidIcon = '.';
};

class Maze : public UI
{
public:
    Maze(Map& GameMap, Person& GamePerson, Key& GameKey, Door& GameDoor);
    void Draw() override;
private:
    ValuesInMatrix vlinmatrix;
    Icons icons;
    Map* somemap;
    Person* someperson;
    Key* somekey;
    Door* somedoor;

    std::vector<std::vector<int>> matrix;

    void Dialog() override;
};

