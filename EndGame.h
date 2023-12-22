#pragma once
#include "UI.h"

class EndGame: public UI
{
    public:
        void Draw()
        {
            Dialog();
            system("pause");
            exit(0);
        };
    private:
        void Dialog()
        {
            std::cout<<"\nGame is end\n";
        }
};