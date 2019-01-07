#include <iostream>
#include <map>
#include <math.h>
#include <string>


using namespace std;

int main(){

    double n;
    double num;
    double oddSum = 0;
    double oddMax = INT_MIN;
    double oddMin = INT_MAX;
    double evenSum = 0;
    double evenMax = INT_MIN;
    double evenMin = INT_MAX;

    cin >> n;
    if (n == 1){
            cin >> num;
        cout << "OddSum=" << num << endl;
        cout << "OddMin=" << num << endl;
        cout << "OddMax=" << num << endl;

        cout << "EvenSum=0" << endl;
        cout << "EvenMin=No" << endl;
        cout << "EvenMax=No" << endl;

    }if (n == 0){
        cout << "OddSum=0" << endl;
        cout << "OddMin=No" << endl;
        cout << "OddMax=No" << endl;

        cout << "EvenSum=0" << endl;
        cout << "EvenMin=No" << endl;
        cout << "EvenMax=No" << endl;

    }else {
        for (int i = 1; i <= n; i++){
        cin >> num;
        if (i % 2 != 0){
                if (num > oddMax){
                    oddMax = num;
                }if (num < oddMin){
                    oddMin = num;
                }
            oddSum += num;
        }else if (i % 2 == 0){
            if (num > evenMax){
                evenMax = num;
            }if (num < evenMin){
                evenMin = num;
            }
            evenSum += num;
            }
        }
        cout << "OddSum=" << oddSum << endl;
        cout << "OddMin=" << oddMin << endl;
        cout << "OddMax=" << oddMax << endl;
        cout << "EvenSum=" << evenSum << endl;
        cout << "EvenMin=" << evenMin << endl;
        cout << "EvenMax=" << evenMax << endl;
    }



    return 0;
}

