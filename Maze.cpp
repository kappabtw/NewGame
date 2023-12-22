#include "Maze.h"

Maze::Maze(Map& GameMap,Person& GamePerson,Key& GameKey,Door& GameDoor)
{
    somemap = &GameMap;
    someperson = &GamePerson;
    somekey = &GameKey;
    somedoor = &GameDoor;
    matrix = GameMap.GetMap();
}

void Maze::Dialog()
{
    std::cout << "\n [W] - up\n [A] - left\n [S] - down\n [D] - right\n[ESC] - exit\n";
    if (somekey->IsUsed())
    {
        std::cout<<"\n[!]-You have the key-[!]\n";
    }
}

void Maze::Draw()
{
    system("cls");
    for (int y = 0; y < matrix.size(); y++)
    {
        for (int x = 0; x < matrix[y].size(); x++)
        {
            const int CurrentValue = matrix[y][x];
            switch (CurrentValue)
            {
            case vlinmatrix.startPersonPosValue:
            case vlinmatrix.voidValue:

                if ((x == someperson->PositionX()) && (y == someperson->PositionY()))
                {
                    std::cout << someperson->Icon();
                }
                else
                {
                    std::cout << icons.voidIcon;
                }
                break;
            case vlinmatrix.wallValue:
                if ((y == 0) || (y == matrix.size() - 1))
                {
                    std::cout << "-";
                }
                else if ((x == 0) || (x == matrix[y].size() - 1))
                {
                    std::cout << "|";
                }
                else
                {
                    std::cout << icons.wallIcon;
                }
                break;
            case somekey->ValueInMatrix:
                if ((someperson->PositionX() == x) && (someperson->PositionY() == y))
                {
                    std::cout << someperson->Icon();
                    somekey->Use();
                }
                else if (somekey->IsUsed())
                {
                    std::cout << icons.voidIcon;
                }
                else
                {
                    std::cout << somekey->Icon();
                }
                break;
            case somedoor->ValueInMatrix:
                if ((someperson->PositionX() == x) && (someperson->PositionY() == y))
                {
                    std::cout << someperson->Icon();
                    somedoor->Use();
                }
                else
                {
                    std::cout << somedoor->Icon();
                }
                break;
            }
        }
        std::cout << std::endl;
    }
    Dialog();
}
        
        