#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <sstream>
#include <map>
#include <vector>

std::vector<std::pair<int, int> > coordsRead(std::vector<std::pair<int, int> > & coords){
    int x1, y1, x2, y2;

    std::cin >> x1 >> y1 >> x2 >> y2;
    coords.push_back({x1, y1});
    coords.push_back({x2, y2});

    return coords;

}
bool inOrOut(std::vector<std::pair<int, int> > & coords){
    if (coords.at(2).first >= coords.at(0).first && coords.at(2).first <= coords.at(1).first &&
        coords.at(2).second >= coords.at(0).second && coords.at(2).second <= coords.at(1).second)
    {
        return true;
    }
    else
    {
        return false;
    }

        return 0;
}


int main() {
    std::vector<std::pair<int, int> > coords;

    coordsRead(coords);
    int x3, y3;

    std::cin >> x3 >> y3;

    coords.push_back({x3, y3});

    if (inOrOut(coords))
    {
        std::cout << "Check point is inside" << std::endl;
    }
    else
    {
        std::cout << "Check point is outside" << std::endl;
    }





    return 0;
}


