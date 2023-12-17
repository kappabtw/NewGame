#include <iostream>
#include "UI.cpp"
#include "Objects.h"

int main()
{
    Mape GameMape;
    std::cout<<"1";
    Person GamePerson{GameMape};
    std::cout<<"2";
    Key GameKey{GameMape};
    Exit GameExit{GameMape};
    Maze GameMaze{GameMape, GamePerson, GameKey, GameExit};    
    std::cout<<"3";
    system("pause");
    GameMaze.Draw();
    //system("cls");
    system("pause");
}