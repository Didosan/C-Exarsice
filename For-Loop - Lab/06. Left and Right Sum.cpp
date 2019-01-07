#include <iostream>
#include <map>
#include <math.h>
#include <string>


using namespace std;

int main(){
    int n, num, leftSum = 0, rightSum = 0;

    cin >> n;
    for (int i = 0; i < 2 * n; i++){
        if (i < n){
            cin >> num;
        leftSum += num;
        }else {
            cin >> num;
        rightSum += num;
        }

    }
    if (leftSum == rightSum){
        cout << "Yes, sum = " << leftSum << endl;
    }else {
        cout << "No, diff = " << abs(leftSum - rightSum) << endl;
    }



    return 0;
}

