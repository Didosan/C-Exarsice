#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main(){
    string pacet;
    double column, rows, result;
    cin >> pacet >> rows >> column;

    cout.setf(ios::fixed);
    cout.precision(2);



    if(pacet == "Premiere"){
        result = 12.00 * rows * column;
        cout <<  result << " leva"<< endl;
    }else if (pacet == "Normal"){
        result = 7.5 * rows * column;
        cout <<  result << " leva"<< endl;
    }else if (pacet == "Discount"){
        result = 5.0 * rows * column;
        cout <<  result << " leva"<< endl;
    }





    return 0;
}
