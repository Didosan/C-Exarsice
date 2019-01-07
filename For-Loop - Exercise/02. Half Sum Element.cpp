#include <iostream>
#include <map>
#include <math.h>
#include <string>


using namespace std;

int main(){

    int n, num,biggestNum = 0, sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num;
        if (num > biggestNum){
            biggestNum = num;
        }
    sum = sum + num;

    }
    sum = sum - biggestNum;
    if (sum == biggestNum){
        cout << "Yes" << endl;
        cout << "Sum = " << sum << endl;
    }else {
        cout << "No" << endl;
        cout << "Diff = " << abs(sum - biggestNum) << endl;
    }


    return 0;
}

