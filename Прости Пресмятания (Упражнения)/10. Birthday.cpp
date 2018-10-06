#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(){
    int duljina, shirochina, visochina;
    double procent;
    cin >> duljina >> shirochina >> visochina >> procent;

    int volume = duljina * shirochina * visochina;
    double liters = volume * 0.001;
    double OverProcent = procent * 0.01;
    double OverLiters = liters *(1 - OverProcent);

    cout<< fixed << setprecision(3) << OverLiters << endl;

    return 0;
}
