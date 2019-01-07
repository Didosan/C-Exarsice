#include <iostream>
#include <map>
#include <cmath>
#include <string>


using namespace std;

int main(){

    double n, num1, num2, firstSum = 0, secontSum = 0, maxDiff = 0, diff = 0;

    cin >> n;
    cin >> num1 >> num2;
    firstSum = num1 + num2;
    for (int i = 0; i < n - 1; i++){
        cin >> num1 >> num2;

            secontSum = num1 + num2;
        diff = abs(firstSum - secontSum);

        if (diff > maxDiff){
            maxDiff = diff;
            diff = 0;

        }
        firstSum = secontSum;
    }
    if (maxDiff == 0){
        cout << "Yes, value=" << firstSum << endl;

    }else{
        cout << "No, maxdiff=" << maxDiff << endl;
    }



    return 0;
}

