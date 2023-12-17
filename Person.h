#include <iostream>
#include "mape.cpp"

class Person
{
    public:
        Person(Mape GameMape);
        const int PositionX(int Change);
        const int PositionY(int Change); 
        const std::string Icon();
    private: 
        Mape* somemape;
        int pos_x;
        int pos_y;
};