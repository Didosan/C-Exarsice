#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    string product, day;
    double quantity;
    cin >> product >> day >> quantity;

    cout.setf(ios::fixed);
    cout.precision(2);

    double price = -1.0;
    if (day == "Monday " || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" ){
        if(product == "banana"){
            price = 2.5;
        }
        else if(product == "apple"){
            price =1.2;
        }
        else if(product == "orange"){
            price = 0.85;
        }
        else if(product == "grapefruit"){
            price =1.45;
        }
        else if(product == "kiwi"){
            price = 2.7;
        }
        else if(product == "pineapple"){
            price = 5.5;
        }
        else if(product == "grapes"){
            price = 3.85;
        }
    }
    else if (day == "Saturday" || day == "Sunday" ){
        if(product == "banana"){
            price = 2.7;
        }
        else if(product == "apple"){
            price = 1.25;
        }
        else if(product == "orange"){
            price = 0.90;
        }
        else if(product == "grapefruit"){
            price = 1.6;
        }
        else if(product == "kiwi"){
            price = 3.0;
        }
        else if(product == "pineapple"){
            price = 5.6;
        }
        else if(product == "grapes"){
            price = 4.2;
        }
    }
    if (price >= 0){
        cout << price * quantity << endl;
    }
    else{
        cout << "error" << endl;
    }




    return 0;
}

