#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;


int main(){

    double steeps, dancers, daysForLerning;
    cin >> steeps >> dancers >> daysForLerning;

    double steepsPrDay = ceil(1 * 100 / daysForLerning);
    double steepsProcent = steepsPrDay / dancers ;

        if (steepsPrDay <= 13){
            cout << "Yes, they will succeed in that goal! " << fixed << setprecision(2) << steepsProcent << "%." << endl;
        }
        else{
           cout << "No, They will not succeed in that goal! Required "<< fixed << setprecision(2) << steepsProcent <<  "% steps to be learned per day." << endl;
        }


    return 0;
}
