#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <map>




int main() {

    std::map<int, std::string> numburs;
    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            numburs.insert(std::pair<int, std::string>(i, "EVEN"));
        }
        else
        {
            numburs.insert(std::pair<int, std::string>(i, "ODD"));
        }
    }
    std::map<int, std::string>::iterator it ;
    for (it = numburs.begin(); it != numburs.end(); it++)
    {
        std::cout << "KEY: " << it->first << " VALUE: " << it->second << std::endl;
    }
    std::cout << std::endl;




    return 0;
}


