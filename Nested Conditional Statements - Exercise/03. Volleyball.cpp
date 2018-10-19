#include <iostream>
#include <string>
#include <math.h>


using namespace std;


int main(){
    string year = " ";

    double p, h, weekendsInSofia, allWeekends, celebration, leap, allGames, allGamesInYear;
    cin >> year >> p >> h;



    if(year == "leap"){
        allWeekends = 48 - h;
        weekendsInSofia = allWeekends *3/4;
        celebration = p * 2/3;
        allGames = weekendsInSofia + h + celebration;
        leap =(weekendsInSofia + h + celebration) * 15/100.0;
        allGamesInYear = floor(allGames + leap);
        cout << allGamesInYear << endl;
    }
    else if(year == "normal"){
        allWeekends = 48 - h;
        weekendsInSofia = allWeekends *3/4;
        celebration = p * 2/3;
        allGames = weekendsInSofia + h + celebration;

        allGamesInYear = floor(allGames + leap);
        cout << allGamesInYear << endl;
    }


    return 0;
}
