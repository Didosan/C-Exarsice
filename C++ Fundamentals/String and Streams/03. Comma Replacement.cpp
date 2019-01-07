#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>




int main() {

using namespace std;

    string s;

    getline(cin, s);

    replace(s.begin(), s.end(), ',', ' ');

    cout << s << endl;


    return 0;
}


