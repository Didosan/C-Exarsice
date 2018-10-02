#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){

    string figura;
    cin >> figura;

    if(figura == "square"){
        double number;
        cin >> number;
        cout << fixed << setprecision(3) << number * number << endl;;
    }
    else if(figura == "rectangle"){
        double number1, number2;
        cin >> number1 >> number2;
        cout << fixed << setprecision(3) << number1 * number2 << endl;
    }
    else if (figura == "circle"){
        double r;
        cin >> r;
        cout << fixed << setprecision(3) << 3.14159265359 * r * r << endl;
    }
    else if(figura == "triangle"){
        double base, height;
        cin >> base >> height;
        cout << fixed << setprecision(3) << (base * height) / 2 << endl;
    }


    return 0;

}
