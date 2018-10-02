#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main(){
    string town; cin >> town;
    double sales; cin >> sales;
    double commision = -1.0;
    cout.setf(ios::fixed);
    cout.precision(2);
    if (town == "Sofia"){
        if(0 <= sales && sales <= 500){
            commision = 5/100.0;
        }
        else if (500 < sales && sales <= 1000){
            commision = 7/100.0;
        }
        else if (1000 < sales && sales <= 10000){
            commision = 8/100.0;
        }
        else if (sales > 10000){
            commision = 12/100.0;
        }

    }
    if (town == "Varna"){
        if(0 <= sales && sales <= 500){
            commision = 4.5/100.0;
        }
        else if (500 < sales && sales <= 1000){
            commision = 7.5/100.0;
        }
        else if (1000 < sales && sales <= 10000){
            commision = 10/100.0;
        }
        else if (sales > 10000){
            commision = 13/100.0;
        }

    }
    if (town == "Plovdiv"){
        if(0 <= sales && sales <= 500){
            commision = 5.5/100.0;
        }
        else if (500 < sales && sales <= 1000){
            commision = 8/100.0;
        }
        else if (1000 < sales && sales <= 10000){
            commision = 12/100.0;
        }
        else if (sales > 10000){
            commision = 14.5/100.0;
        }

    }
    if(commision >= 0) {
            cout << sales *  commision << endl;
        }else{

        cout << "error"<< endl;
        }






    return 0;
    }

