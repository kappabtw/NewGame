#include "map.h"

void Map::ReadMatrixFromFile(std::string fileName) {

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
    file.close();
}

const std::vector<std::vector<int>> Map::GetMap()
{
    return matrix;
}


Map::Map()
{
    ReadMatrixFromFile("labirinto.dat");
}