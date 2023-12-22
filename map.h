#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

class Map
{
    public:

        Map();
        void ReadMatrixFromFile(std::string FileName);
        const std::vector<std::vector<int>> GetMap();
    private:
        std::vector<std::vector<int>> matrix;
        
};