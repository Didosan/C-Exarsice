#include <iostream>
#include <map>
#include <cmath>
#include <string>


using namespace std;

int main(){

    int n, salary;
    string input;
    cin >> n >> salary;

    map<string, int>badSaits;
    badSaits["Facebook"] = 150;
    badSaits["Instagram"] = 100;
    badSaits["Reddit"] = 50;

    for(int i = 0; i < n; i++){
        cin >> input;
        salary -= badSaits[input];

        if (salary <= 0){
            break;
        }
    }

    if (salary <= 0){
        cout << "You have lost your salary." << endl;
    }else{
        cout << salary << endl;
    }



    return 0;
}
