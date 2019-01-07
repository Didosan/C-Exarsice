
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
class Distance{
public:

    double x1 = 0;
    double y1 = 0;
    double x2 = 0;
    double y2 = 0;

    Distance(){


    }



};

void distanceCalculate(Distance d){
    double x = d.x1 - d.x2;
    double y = d.y1 - d.y2;

    double dist;
    dist = pow(x, 2) + pow(y, 2);
    dist = sqrt(dist);
    cout << dist << endl;


}



int main() {
    Distance d;
    cin >> d.x1 >> d.y1 >> d.x2 >> d.y2;

    distanceCalculate(d);



    return 0;
}


