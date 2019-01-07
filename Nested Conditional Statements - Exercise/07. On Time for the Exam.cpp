#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <stdio.h>

using namespace std;


int main(){

    int hourForExam, minForExam, hourArrive, minArrive;
    cin >> hourForExam >> minForExam >> hourArrive >> minArrive;
    int diferent = 0;

    if (hourArrive > hourForExam){
            diferent = abs(hourArrive - hourForExam);
            int minDiferent = abs(minArrive - minForExam);
            cout << "Late" << endl;
            printf("%0d:%02d hours after the start", diferent, minDiferent);
        } else if(hourArrive == hourForExam && minForExam < minArrive){
        diferent = abs(minArrive - minForExam);
        cout << "Late" << endl;
        cout << diferent << " minutes after the start" << endl;

    }else if (hourArrive < hourForExam){
            diferent = abs(hourArrive - hourForExam);
            int minDiferent = abs(minArrive - minForExam);
            cout << "Early" << endl;
            printf("%0d:%02d hours before the start", diferent, minDiferent);
        } else if(minForExam > minArrive){
        diferent = abs(minArrive - minForExam);
        cout << "Early" << endl;
        cout << diferent << " minutes before the start" << endl;

    }


    return 0;
}

