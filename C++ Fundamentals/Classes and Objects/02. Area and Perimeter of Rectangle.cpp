#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
class Rectangle{
public:

    double a;
    double b;


    Rectangle(){

    }



};
void areaCalculedAndPrint(Rectangle area){

        double Area = area.a * area.b;
        double Perimeter = (2*(area.a + area.b));

        cout << Area << endl;
        cout << Perimeter << endl;
}






int main() {
    Rectangle r;

    cin >> r.a >> r.b;
    areaCalculedAndPrint(r);





    return 0;
}


