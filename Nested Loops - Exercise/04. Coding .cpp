#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <map>


using namespace std;

int main(){
    int a, b;
    cin >> a;
    while (a){
        b = a % 10;
        for (int i = 0; i < b; i++){
            cout << char (b + 33);
        }
        if (!b)cout << "ZERO";
        cout << endl;
        a = a / 10;
    }



    return 0;
}



