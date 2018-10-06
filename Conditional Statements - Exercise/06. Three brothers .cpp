#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double A,B,C,D;
    cin >> A >> B >> C >> D;

    double OverTime = 1 / (1 / A + 1 / B  + 1/C);
    double TimeWithRest = OverTime * 0.15;
    OverTime += TimeWithRest;
    double LeftTime = D - OverTime;
    cout << "Cleaning time: " << fixed << setprecision(2) << (OverTime) << endl;
    if(LeftTime > 0){
        cout << "Yes, there is a surprise - time left -> " << fixed << setprecision(0) << floor(LeftTime) << " hours." << endl;
    }
    else{
        cout << "No, there isn't a surprise - shortage of time -> "
        << fixed << setprecision(0) << ceil(abs(LeftTime)) << " hours." << endl;
    }




    return 0;
}
