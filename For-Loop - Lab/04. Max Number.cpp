#include <iostream>
#include <map>
#include <math.h>
#include <string>


using namespace std;

int main(){

    int n;
    int num = INT_MAX;
    int maxNum = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num;
        if (num > maxNum){
            maxNum = num;
        }

    }
    cout << maxNum << endl;


    return 0;
}

