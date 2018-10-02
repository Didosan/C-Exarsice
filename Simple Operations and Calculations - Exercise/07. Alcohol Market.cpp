#include <iostream>

using namespace std;

int main(){

    double WiskyPrice, BeerLiters, WineLiters, RakiaLiters, WiskyLiters;
    cin >> WiskyPrice >> BeerLiters >> WineLiters >> RakiaLiters >> WiskyLiters;

    double RakiaPrice = WiskyPrice / 2;
    double WinePrice = RakiaPrice - (0.4 * RakiaPrice);
    double BeerPrice = RakiaPrice - (0.8 * RakiaPrice);

    double AmontForRakia = RakiaLiters * RakiaPrice;
    double AmontForWine = WineLiters * WinePrice;
    double AmontForBeer = BeerLiters * BeerPrice;
    double AmontForWisky = WiskyLiters * WiskyPrice;

    double OverAmont = AmontForRakia + AmontForWine + AmontForBeer + AmontForWisky;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << OverAmont;

    return 0;
}
