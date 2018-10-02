#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;


int main(){

    string floaures;
    int floauresPre, budjet;
    cin >> floaures >> floauresPre >> budjet;

    double result = 0;


    if(floaures == "Roses"){
        result = floauresPre * 5.0;
        if(floauresPre > 80){
            result = result - (result * 10.0/100);

        }

    }else if(floaures == "Dahlias"){
        result = floauresPre * 3.8;
        if(floauresPre > 90){
            result = result - (result * 15.0/100);

        }
    }else if(floaures == "Tulips"){
        result = floauresPre * 2.8;
        if(floauresPre > 80){
            result = result - (result * 15.0/100);

        }
    }else if(floaures == "Narcissus"){
        result = floauresPre * 3.0;
        if(floauresPre < 120){
            result = result + (result * 15.0/100);

        }
    }else if(floaures == "Gladiolus"){
        result = floauresPre * 2.5;
        if(floauresPre < 80){
            result = result + (result * 20.0/100);

        }
    }
    double diferenc = abs(result - budjet);

    if(budjet >= result){
        cout << fixed << setprecision(2) << "Hey, you have a great garden with " << floauresPre << " " << floaures << " and " << diferenc << " leva left." << endl;
    }else{
        cout << fixed << setprecision(2) << "Not enough money, you need " << diferenc << " leva more." << endl;

    }


    return 0;
}
