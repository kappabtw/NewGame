#pragma once
#include "UI.h"

class StartGame: public UI
{
    public:
        void Draw()
        {
            Dialog();
            system("pause");
        }
    private:
        void Dialog()
        {
            std::cout<<"Press something to play\n";
        }
};