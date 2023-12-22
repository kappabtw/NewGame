#pragma once
#include "GameLoop.h"
#include <iostream> 
#include <windows.h>
#include <conio.h>

const std::string GameLoop::InputParser::ButtonPress::KeyPressed()
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
                case 27: //выход
                    return "EXIT";
                }
        
        }
    }
}