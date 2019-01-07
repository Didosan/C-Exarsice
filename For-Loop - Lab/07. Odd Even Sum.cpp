#include <iostream>
#include <map>
#include <math.h>
#include <string>


using namespace std;

int main(){
    int n, num, evenSum = 0, oddSum = 0;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num;
        if (i % 2 == 0){
            evenSum += num;
        }else {
            oddSum += num;
        }
    }
    if (evenSum == oddSum){
        cout << "Yes" << endl;
        cout << "Sum = "<< evenSum << endl;
    }else{
        cout << "No" << endl;
        cout << "Diff = "<< abs(evenSum - oddSum) << endl;
    }

    return 0;
}

