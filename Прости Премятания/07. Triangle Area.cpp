#include <iostream>

using namespace std;

int main(){
double a, h;
cin >> a >> h;
double area = a * h / 2;
cout.setf(ios::fixed);
cout.precision(2);
cout << area;



return 0;
}
