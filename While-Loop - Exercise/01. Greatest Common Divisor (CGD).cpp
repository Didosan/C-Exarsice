#include <iostream>
#include <map>
#include <math.h>

using namespace std;

int main(){

    int a, b;
    cin >> a >> b;
    while(a != b){
        if (a < b){

            swap(a, b);
        }
        a -= b;
    }
    cout << a << endl;



    return 0;
}
