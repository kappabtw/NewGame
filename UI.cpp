#pragma once
#include "UI.h"

const std::string StartGame::State()
{
    return "StartUI";
}

void StartGame::Dialog()
{
    std::cout<<"\nNew Game?";
}

void StartGame::Draw()
{
    Dialog();
    system("pause");
}

Maze::Maze(Mape GameMape, Person GamePerson, Key GameKey, Exit GameExit)
{
    wallIcon = "1";
    voidIcon = ".";
    this->somemape = GameMape;
    this->someperson = GamePerson;
    this->somekey = GameKey;
    this->someexit = GameExit;
    matrix = somemape.GetMape();
}

const std::string Maze::State()
{
    return "Maze";
}

void Maze::Dialog()
{
    std::cout<<"\n [W] - up\n [A] - left\n [D] - right\n [S] - down\n";
}

void Maze::Draw()
{
    system("cls");
    for (int y = 0; y<matrix.size(); y++)
    {
        for (int x = 0; x<matrix[y].size();x++)
        {
            switch (matrix[y][x])
            {
                case 3:
                case (0):
                    if ((x == someperson.PositionX())&(y == someperson.PositionY()))
                    {
                        std::cout<<someperson.Icon();
                    }
                    else 
                    {
                        std::cout<<voidIcon;
                    }
                    break;
                case 1:
                    if ((y == 0)||(y == matrix.size() - 1))
                    {
                        std::cout<<"-";
                    }
                    else if ((x==0)||(x == matrix[y].size() - 1))
                    {
                        std::cout<<"|";
                    }
                    
                    else
                    {
                        std::cout<<wallIcon;
                    }
                    break;
                case (somekey.ValueInMatrix):
                    if ((someperson.PositionX() == x)&(someperson.PositionY() == y))
                    {
                        std::cout<<someperson.Icon();
                        somekey.Use();
                    }
                    else if (somekey.IsUsed())
                    {
                        std::cout<<voidIcon;
                    }
                    else
                    {
                        std::cout<<somekey.Icon();
                    }
                    break;
                case (someexit.ValueInMatrix):
                    if ((someperson.PositionX() == x)&(someperson.PositionY() == y))
                    {
                        std::cout<<someperson.Icon();
                        someexit.Use();
                    }
                    else
                    {
                        std::cout<<someexit.Icon();
                    }
                    break;
            }
        }
        std::cout<<std::endl;
    }
    Dialog();

}