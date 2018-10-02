#include <iostream>

using namespace std;


int main(){
double USD;
cin >> USD;

double BGN = 1.79549 * USD;
cout.setf(ios::fixed);
cout.precision(2);
cout << BGN << " BGN";




return 0;
}
