#pragma once
#include "mape.h"

void Mape::ExploreFile(std::string fileName) {

    std::ifstream file(fileName);

    std::string line;

    while (std::getline(file, line)) {
        std::vector<int> row;
        int num = 0;
        std::stringstream ss(line);

        while (ss >> num) {
            row.push_back(num);
        }

        matrix.push_back(row);
    }
    /*for (int y = 0; y<matrix.size(); y++)
    {
        for (int x = 0; x<matrix[y].size(); x++)
        {
            std::cout<<matrix[y][x];
        }
        std::cout<<"\n";
    }*/
    file.close();
}

const std::vector<std::vector<int>> Mape::GetMape()
{
    return matrix;
}

/*const int* Mape::GetPointsFromNumber(int num, int *ArrOfPoints) 
{
    for (int y = 0; y<matrix.size(); y++)
    {
        for (int x = 0; x<matrix[y].size(); x++)
        {
            if (matrix[y][x] == num)
            {
                PointsFromNumber[0] = x;
                PointsFromNumber[1] = y;
                ArrOfPoints = PointsFromNumber;
                return ArrOfPoints;
            }
        }
    }
    PointsFromNumber[0] = 0;
    PointsFromNumber[1] = 0;
    ArrOfPoints = PointsFromNumber;
    std::cerr<<"Wrong num, returned {-0, 0}";
    return ArrOfPoints;
}*/

Mape::Mape()
{
    ExploreFile("01.txt");
}