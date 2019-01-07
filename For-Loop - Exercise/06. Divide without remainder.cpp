#include <iostream>
#include <map>
#include <cmath>
#include <string>


using namespace std;

int main(){

    int n, num;
    double p1 = 0, p2 = 0, p3 = 0;

    cin >> n;
    for (int i = 0; i < n; i++){
            cin >> num;
        if (num % 2 == 0){
            p1++;
        }if (num % 3 == 0){
            p2++;
        }if (num % 4 == 0){
            p3++;
        }
    }
    cout.setf(ios::fixed);
    cout.precision(2);
     p1 = p1/n*100.0;
     p2 = p2/n*100.0;
     p3 = p3/n*100.0;

    cout << p1 << "%" << endl;
    cout << p2 << "%" << endl;
    cout << p3 << "%" << endl;




    return 0;
}

