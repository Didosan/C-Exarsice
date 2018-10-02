#include <iostream>
#include <cmath>

using namespace std;

int main(){

double x1, x2, y1, y2;
cin >> x1 >> y1 >> x2 >> y2;
double sidaA =  (x1, x2) - min(x1, x2);
double sidaB = max(y1,y2) - min(y1, y2);
double area = (sidaA * sidaB);
double perimeter = (2 * (sidaA + sidaB));
cout<< area << endl;
cout << perimeter << endl;


return 0;
}
