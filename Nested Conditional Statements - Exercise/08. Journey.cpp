#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main(){
    double budjet;
    string sesson;
    cin >> budjet >> sesson;

    double result = 0;
    cout.setf(ios::fixed);
    cout.precision(2);
    if (budjet <= 100){
        cout << "Somewhere in Bulgaria" << endl;
        if(sesson == "summer"){
            result = budjet * 30/100;
            cout << "Camp - " << result << endl;
        }else if (sesson == "winter"){
            result = budjet * 70/100;
            cout << "Hotel - " << result << endl;
        }
    }else if (budjet > 100 && budjet <= 1000){
        cout << "Somewhere in Balkans" << endl;
        if(sesson == "summer"){
            result = budjet * 40/100;
            cout << "Camp - " << result << endl;
        }else if (sesson == "winter"){
            result = budjet * 80/100;
            cout << "Hotel - " << result << endl;
        }
    }else if (budjet > 1000){
        cout << "Somewhere in Europe" << endl;
        if(sesson == "summer" || sesson == "winter"){
            result = budjet * 90/100;
            cout << "Hotel - " << result << endl;
        }
    }




    return 0;
}
