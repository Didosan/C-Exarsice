#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double priceForExcurzia;
    int puzzelPcs, tollkDollsPcs, plushBeerPcs, miniunsPcs, trackPcs;

    cin >> priceForExcurzia >> puzzelPcs >> tollkDollsPcs >> plushBeerPcs >> miniunsPcs >> trackPcs;


    double amont = puzzelPcs * 2.6 +
                   tollkDollsPcs * 3 +
                   plushBeerPcs * 4.1 +
                   miniunsPcs * 8.2 +
                   trackPcs * 2;

     int ToyPcs = puzzelPcs + tollkDollsPcs + plushBeerPcs + miniunsPcs + trackPcs;

    ///135 > 50 => 25% отстъпка; 25% от 680 = 170 лв. отстъпка
    ///Крайна цена: 680 – 170 = 510 лв.
    ///Наем: 10% от 510 лв. = 51 лв.
    ///Печалба: 510 – 51 = 459 лв.
    ///459 > 40.8 => 459 – 40.8 = 418.20 лв. остават


    if(ToyPcs >= 50){
            amont = amont - amont * 0.25;

        }
        double rent = amont * 0.1;
        double profit = amont - rent;
        double moneyLeft;

        if(profit >= priceForExcurzia){
                moneyLeft =  profit - priceForExcurzia;

            cout << fixed << setprecision(2) << "Yes! " << moneyLeft << " lv left." << endl;
        }
        else{

            double moneyDiff = priceForExcurzia - profit;
        cout << fixed << setprecision(2) << "Not enough money! " << moneyDiff << " lv needed." << endl;
        }

    return 0;
    }


