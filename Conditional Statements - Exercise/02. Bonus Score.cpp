#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int score;
    cin >> score;

    double bonusScore = 0;
    double sum = 0;
    if (score <= 100){
        bonusScore += 5;

    }
    else if(score > 100 && score <= 1000){
        bonusScore = score * 0.2;

    }
    else if(score > 1000){
        bonusScore = score * 0.1;
    }

    if(score %2 == 0){
        bonusScore += 1;
    }
    else if(score %10 == 5){
        bonusScore += 2;
    }
    sum = score + bonusScore;

    cout <<fixed << setprecision(1) << bonusScore << endl;
    cout <<fixed << setprecision(1) << sum <<endl;




    return 0;
}
