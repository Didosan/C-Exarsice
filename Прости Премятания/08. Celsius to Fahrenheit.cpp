#include <iostream>

using namespace std;

int main(){
    double Celsius;
    cin >> Celsius;
    double Fahrenhei =((Celsius * 1.8) + 32);
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << Fahrenhei;
    return 0;
}
