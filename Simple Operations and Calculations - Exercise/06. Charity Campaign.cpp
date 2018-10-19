#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int days, cefs, cake, gofret, pancake;
    cin >> days >> cefs >> cake >> gofret >> pancake;

    double cakePrice = cake * 45;
    double gofretPrice = gofret * 5.80;
    double pancakePrice =pancake * 3.20;


    double AmontPrDayOfCef = (cakePrice + gofretPrice + pancakePrice) * cefs;
    double OverAmont = AmontPrDayOfCef * days;
    double AfterPay = OverAmont -(OverAmont / 8);

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << AfterPay;
    return 0;
}
