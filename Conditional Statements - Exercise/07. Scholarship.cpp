#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double payDay, Uspeh, minZaplata, scholarship, exellentResult;
    cin >> payDay >> Uspeh >> minZaplata;

    scholarship = floor(0.35 * minZaplata);
    exellentResult = floor(Uspeh * 25);
    if (payDay > minZaplata && Uspeh < 5.50){
        cout << "You cannot get a scholarship!" << endl;

    }
    else if(payDay < minZaplata && Uspeh >= 4.50){

        cout << "You get a Social scholarship " << scholarship << " BGN" << endl;

    }
    else if (payDay < minZaplata && Uspeh >= 5.50 &&  scholarship <= exellentResult){

        cout << "You get a Social scholarship " << scholarship << " BGN" << endl;
    }
    else if(Uspeh >= 5.50 && payDay >= minZaplata){

        cout << "You get a scholarship for excellent results " << exellentResult << " BGN" << endl;
    }
    else if (payDay <= minZaplata && Uspeh < 5.50){
        cout << "You cannot get a scholarship!" << endl;
    }
    else if (Uspeh > 5.50){
        cout << "You get a scholarship for excellent results " << exellentResult << " BGN" << endl;
    }



    return 0;
}
