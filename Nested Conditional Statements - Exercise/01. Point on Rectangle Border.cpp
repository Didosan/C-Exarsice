#include <iostream>

using namespace std;

int main(){

    double x1, y1, x2, y2, x, y ;
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;

    if ((x == x1 || x == x2) && (y >= y1 && y <= y2)) {
        cout << "Border" << endl;
    }else if((y == y1 || y == y2) && (x >= x1 && x <= x2)){
        cout << "Border" << endl;
    }
    else {
        cout << "Inside / Outside" << endl;
    }



    return 0;
}
