#include <iostream>
#include <string>

using namespace std;

int main(){

    int degrise;
    string timeInDay;
    cin >> degrise >> timeInDay;

    if (10 <= degrise && degrise <= 18){
            if(timeInDay == "Morning"){
                cout << "It's " << degrise << " degrees, get your Sweatshirt and Sneakers." << endl;

            }else if (timeInDay == "Afternoon"){
                cout << "It's " << degrise << " degrees, get your Shirt and Moccasins." << endl;

            }else if (timeInDay == "Evening"){
                cout << "It's " << degrise << " degrees, get your Shirt and Moccasins." << endl;

            }

    }else if (18 < degrise && degrise <= 24){
        if(timeInDay == "Morning"){
                cout << "It's " << degrise << " degrees, get your Shirt and Moccasins." << endl;

            }else if (timeInDay == "Afternoon"){
                cout << "It's " << degrise << " degrees, get your T-Shirt and Sandals." << endl;

            }else if (timeInDay == "Evening"){
                cout << "It's " << degrise << " degrees, get your Shirt and Moccasins." << endl;

            }
    }else if(degrise >= 25){
        if(timeInDay == "Morning"){
                cout << "It's " << degrise << " degrees, get your T-Shirt and Sandals." << endl;

            }else if (timeInDay == "Afternoon"){
                cout << "It's " << degrise << " degrees, get your Swim Suit and Barefoot." << endl;

            }else if (timeInDay == "Evening"){
                cout << "It's " << degrise << " degrees, get your Shirt and Moccasins." << endl;

            }
    }


    return 0;
}
