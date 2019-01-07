#include <iostream>
#include <sstream>




int main() {

using namespace std;


    string line1;
    string line2;

    getline(cin, line1);
    getline(cin, line2);

    istringstream stream (line1);

    stream >> line1 >> line2;

    if (line1 == line2)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not Equal" << endl;
    }
    return 0;
}


