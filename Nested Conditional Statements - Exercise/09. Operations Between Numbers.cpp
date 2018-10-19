#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>

using namespace std;


int main(){

    int N1, N2;
    string simbol;
    cin >> N1 >> N2 >> simbol;
    int sum = 0;
    if(N1 <= 0 || N2 <= 0){
        cout << "Cannot divide " << N1 << " by zero" << endl;
    }else if (simbol == "+"){
        sum = N1 + N2;
        if (sum % 2 == 0){
            cout << N1 << " + " << N2 << " = " << sum << " - even" << endl;
        }else if (sum % 2 != 0){
            cout << N1 << " + " << N2 << " = " << sum << " - odd" << endl;
        }
    }else if (simbol == "-"){
        sum = N1 - N2;
        if (sum % 2 == 0){
            cout << N1 << " - " << N2 << " = " << sum << " - even" << endl;
        }else if (sum % 2 != 0){
            cout << N1 << " - " << N2 << " = " << sum << " - odd" << endl;
        }
    }else if (simbol == "*"){
        sum = N1 * N2;
        if (sum % 2 == 0){
            cout << N1 << " * " << N2 << " = " << sum << " - even" << endl;
        }else if (sum % 2 != 0){
            cout << N1 << " * " << N2 << " = " << sum << " - odd" << endl;
        }
    }else if (simbol == "/"){
        double sum1 = N1 * 1.0 / N2 * 1.0;
        cout << fixed << setprecision(2) << N1 << " / " << N2 << " = " << sum1 << endl;
    }else if (simbol == "%"){
        sum = N1 % N2;
        cout << fixed << setprecision(2) << N1 << " % " << N2 << " = " << sum << endl;
    }

    return 0;
}
