#include <iostream>

using namespace std;


int main(){

    int table;
    double length;
    double width;
    cin >> table >> length >> width;

    int CvadratenM = 7;
    int PirPsc = 9;
    double USD = 1.85;

    double OverAreaPokrivka = table * (length + 2 * 0.30) * (width + 2 * 0.30);
    double OverAreaCareta = table * (length / 2) * (length / 2);

    double PriceInUSD = (OverAreaPokrivka * CvadratenM) + (OverAreaCareta * PirPsc);
    double PriceInBGN = PriceInUSD * USD;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << PriceInUSD << " USD" << endl;
    cout << PriceInBGN << " BGN" << endl;



    return 0;

}
