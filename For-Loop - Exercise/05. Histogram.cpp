#include <iostream>
#include <map>
#include <cmath>
#include <string>


using namespace std;

int main(){

    double n, num, p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    cin >> n;
    for (int i = 0; i < n; i++){
            cin >> num;
        if (num < 200){
            p1++;
        }else if (num >= 200 && num <= 399){
            p2++;
        }else if (num >=400 && num <= 599){
            p3++;
        }else if (num >= 600 && num <= 799){
            p4++;
        }else if (num >= 800){
            p5++;
        }
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    p1 = p1/n*100.0;
    p2 = p2/n*100.0;
    p3 = p3/n*100.0;
    p4 = p4/n*100.0;
    p5 = p5/n*100.0;
    cout << p1 << "%" << endl;
    cout << p2 << "%" << endl;
    cout << p3 << "%" << endl;
    cout << p4 << "%" << endl;
    cout << p5 << "%" << endl;



    return 0;
}

