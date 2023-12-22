#include "Person.h"

const int Person::PositionX(int Change = 0)
{
    pos_x+=Change;
    return pos_x;
}

const int Person::PositionY(int Change = 0)
{
    pos_y+=Change;
    return pos_y;
}

const std::string Person::Icon()
{
    return "O";
}

Person::Person(Map& GameMap)
{
    this->somemap = &GameMap;
    std::vector<std::vector<int>> matrix;
    matrix = somemap->GetMap();
    for (int y = 0; y<matrix.size(); y++)
    {
        for (int x = 0; x<matrix[y].size(); x++)
        {
            if (matrix[y][x] == 3)
            {
                pos_x = x;
                pos_y = y;
            }
        }
    }
}