#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <sstream>
#include <map>
#include <vector>

std::map<std::string, std::pair<std::string, int> > dataFulling(std::map<std::string, std::pair<std::string, int> > & data){

    std::string made;
    std::string model;
    int year = 0;

    int numberCar = 0;
    std::cin >> numberCar;

    for (size_t i = 0; i < numberCar; i++)
    {
        std::cin >> made >> model >> year;

        data[made] = std::pair<std::string, int>(model, year);
    }

    return data;

}


int main() {

    std::map<std::string, std::pair<std::string, int> > data;

    dataFulling(data);

    std::map<std::string, std::pair<std::string, int> >::iterator it;

    int option = 0;
    std::cin >> option;

    if (1 == option)
    {
        std::string manifacture;
        std::cin >> manifacture;

        it = data.find(manifacture);
        if (it != data.end())
        {
            std::cout << it->first << " " << it ->second.first << " " << it ->second.second << std::endl;
        }
    }
    else if(2 ==option)
    {
        for (it = data.begin(); it != data.end(); it++)
        {
            std::cout << it-> first << " " << it->second.first << " " << it ->second.second << std::endl;
        }
    }




    return 0;
}


