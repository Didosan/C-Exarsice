#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    string month, room;
    int overnight;
    cin >> month >> overnight;

    cout.setf(ios::fixed);
    cout.precision(2);
    double price, overPrice, priceForStudio, overPriceForStudio = 0;
    if (month == "May" || month == "October"){
            price = 65.0;
            overPrice = price * overnight;
            if(overnight > 14){
                overPrice = overPrice - overPrice * 10/100;
            }
            cout << "Apartment: " << overPrice << " lv." << endl;
            priceForStudio = 50.0;
            overPriceForStudio = priceForStudio * overnight;
            if(overnight > 7 && overnight <= 13){
                overPriceForStudio = overPriceForStudio - overPriceForStudio * 5/100;
            }else if (overnight > 14){
                overPriceForStudio = overPriceForStudio - overPriceForStudio * 30/100;
            }
            cout << "Studio: "<< overPriceForStudio << " lv." << endl;

    }else if (month == "June" || month == "September"){
            price = 68.7;
            overPrice = price * overnight;
            if(overnight > 14){
                overPrice = overPrice - overPrice * 10/100;
            }
            cout << "Apartment: " << overPrice << " lv." << endl;

            priceForStudio = 75.2;
            overPriceForStudio = priceForStudio * overnight;
            if (overnight > 14){
                overPriceForStudio = overPriceForStudio - overPriceForStudio * 20/100;
            }
            cout << "Studio: "<< overPriceForStudio << " lv." << endl;

    }else if (month == "July" || month == "August"){
            price = 77.0;
            overPrice = price * overnight;
            if(overnight > 14){
                overPrice = overPrice - overPrice * 10/100;
            }
            cout << "Apartment: " << overPrice << " lv." << endl;

            priceForStudio = 76.0;
            overPriceForStudio = priceForStudio * overnight;

            cout << "Studio: "<< overPriceForStudio << " lv." << endl;

    }



    return 0;
}

