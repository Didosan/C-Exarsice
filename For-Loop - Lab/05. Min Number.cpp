#include <iostream>
#include <map>
#include <math.h>
#include <string>


using namespace std;

int main(){

    int n;
    int num = INT_MIN;
    int minNum = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num;
        if (num < minNum){
            minNum = num;
        }

    }
    cout << minNum << endl;


    return 0;
}

