#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "fileInterface.h"

class Mape: public File
{
    public:

        Mape();
        void ExploreFile(std::string FileName) override;
        const std::vector<std::vector<int>> GetMape();
        //const int* GetPointsFromNumber(int number, int *ArrOfPoints);
    private:
        std::vector<std::vector<int>> matrix;
        //int PointsFromNumber[2]{0};
        
};