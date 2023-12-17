#pragma once
#include <iostream>
#include "Mape.cpp"

class IObject
{
    public:
        IObject(Mape GameMape)
        {
            this->somemape = &GameMape;
            std::vector<std::vector<int>> matrix;
            matrix = somemape->GetMape();
            for (int y = 0; y<matrix.size(); y++)
            {
                for (int x = 0; x<matrix[y].size(); x++)
                {
                    if (matrix[y][x] == ValueInMatrix)
                    {
                        pos_x = x;
                        pos_y = y;
                    }
                }
            }
            Used = false;
        }

        virtual const std::string State() = 0;
        const int PositionX()
        {
            return pos_x;
        }

        const int PositionY()
        {
            return pos_y;
        }

        virtual const std::string Icon() = 0;
        const bool IsUsed()
        {
            return Used;
        }

        void Use()
        {
            Used = true;
        }

    protected:
        Mape *somemape;
        bool Used;
        int pos_x;
        int pos_y;
        static const int ValueInMatrix = 0;
};