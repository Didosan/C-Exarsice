#include <iostream>
#include <cmath>

using namespace std;


int main(){
    double L, W, A;
    cin >> L >> W >> A;

    double HallArea = (L * 100) * (W * 100);
    double wardrobe = (A * 100) * (A * 100);
    double bench = HallArea / 10;


    double FreeSpece = HallArea - wardrobe - bench;
    double Dencers = floor(FreeSpece / (40 + 7000));

    cout << Dencers;


    return 0;
}
