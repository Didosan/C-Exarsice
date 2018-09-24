#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    double WR, distanceM, timeInSecPerM;
    cin >> WR >> distanceM >> timeInSecPerM;

    double allDistance = distanceM * timeInSecPerM;
    double addTime = floor(distanceM / 15) * 12.5;
    double allTime = allDistance + addTime;
    if(WR <= allTime){

        double timeNeed = allTime - WR;
        cout << "No, he failed! He was " << fixed << setprecision(2) << timeNeed << " seconds slower." << endl;
    }
    else if (WR > allTime){
        double BestTime = allDistance + addTime;
        cout << "Yes, he succeeded! The new world record is " << fixed << setprecision(2) << BestTime << " seconds." << endl;
    }






    return 0;
}

