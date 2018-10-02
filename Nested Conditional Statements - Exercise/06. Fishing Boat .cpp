#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;


int main(){

    int budjet, fishmans;
    string sesons;
    cin >> budjet >> sesons >> fishmans;

    double result, price = 0;
    if(sesons == "Spring"){
        price = 3000;
        if(fishmans <= 6){
            result = price - (price * 10.0/100);
        }else if (7 > fishmans || fishmans <= 11){
            result = price - (price * 15.0/100);
        }else if (fishmans >= 12){
            result = price - (price * 25.0/100);
        }else if (fishmans % 2 == 0){
            result = result + 5.0/100;
        }
    }else if(sesons == "Summer"){
        price = 4200;
        if(fishmans <= 6){
            result = price - (price * 10.0/100);
        }else if (7 > fishmans || fishmans <= 11){
            result = price - (price * 15.0/100);
        }else if (fishmans >= 12){
            result = price - (price * 25.0/100);
        }else if (fishmans % 2 == 0){
            result = result + 5.0/100;
        }
    }else if(sesons == "Autumn"){
        price = 4200;
        if(fishmans <= 6){
            result = price - (price * 10.0/100);
        }else if (7 > fishmans || fishmans <= 11){
            result = price - (price * 15.0/100);
        }else if (fishmans >= 12){
            result = price - (price * 25.0/100);
        }
    }else if(sesons == "Winter"){
        price = 2600;
        if(fishmans <= 6){
            result = price - (price * 10.0/100);
        }else if (7 > fishmans || fishmans <= 11){
            result = price - (price * 15.0/100);
        }else if (fishmans >= 12){
            result = price - (price * 25.0/100);
        }else if (fishmans % 2 == 0){
            result = result + 5.0/100;
        }
    }
    double diferenc = abs(budjet - result);
    if (budjet >= result){
        cout << fixed << setprecision(2) << "Yes! You have " << diferenc << " leva left." << endl;
    }else{
        cout << fixed << setprecision(2) << "Not enough money! You need " << diferenc << " leva." << endl;
    }



    return 0;
}
