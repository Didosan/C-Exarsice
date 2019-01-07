#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <map>

using namespace std;


int main(){

    int budget, numberFishermen;
    string sesons;
    cin >> budget >> sesons >> numberFishermen;



    map<string, double> sesonsPrice;
    sesonsPrice ["Spring"] = 3000;
    sesonsPrice ["Summer"] = 4200;
    sesonsPrice ["Autumn"] = 4200;
    sesonsPrice ["Winter"] = 2600;

    double result = 0;

    if (numberFishermen <= 6)
            {
                result = sesonsPrice[sesons] - (sesonsPrice[sesons] * 0.10);
            }
            else if(numberFishermen > 7 && numberFishermen <= 11)
            {
                result = sesonsPrice[sesons] - (sesonsPrice[sesons] * 0.15);
            }
            else
            {
                result = sesonsPrice[sesons] - (sesonsPrice[sesons] * 0.25);
            }

            if (numberFishermen % 2 == 0 && sesonsPrice["Autumn"]== false)
            {
                result = sesonsPrice[sesons] - (sesonsPrice[sesons] * 0.05);
            }

    double diferenc = abs(budget - result);
    if (budget > result){
        cout << fixed << setprecision(2) << "Yes! You have " << diferenc << " leva left." << endl;
    }else{
        cout << fixed << setprecision(2) << "Not enough money! You need " << diferenc << " leva." << endl;
    }



    return 0;
}

