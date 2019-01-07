#include <iostream>
#include <map>
#include <math.h>
#include <string>


using namespace std;

int main(){
    int n, number;
    int sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> number;
        sum += number;

    }
    cout << sum << endl;



    return 0;
}
