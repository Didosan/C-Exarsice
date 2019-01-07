#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>




int main() {

using namespace std;


    string s;

    getline(cin, s);

    reverse(s.begin(), s.end());

    cout << s << endl;



    return 0;
}


