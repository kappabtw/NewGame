#pragma once
#include "UserInput.h"
#include <iostream> 
#include <windows.h>
#include <conio.h>
using namespace std;
const std::string ButtomPress::KeyPressed()
{
    while (true)
    {
        if(kbhit()) 
        {
            switch(getch())
                {
                case 119: //вверх
                    return "UP";
                case 115: //вниз
                    return "DOWN";
                case 97: //влево 
                    return "LEFT";
                        break;
                case 100: //вправо
                    return "RIGHT";
                case 27:
                    return "EXIT";
                }
        
        }
    }
}

const std::string State()
{
    return "ButtomPress";
}

int main()
{
    ButtomPress Key;
    while(true)
    {
    std::cout<<Key.KeyPressed();
    }
    system("pause");
}