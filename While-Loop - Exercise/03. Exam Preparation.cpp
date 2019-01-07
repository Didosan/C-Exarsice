#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>


using namespace std;

int main(){
    string input, lastOfProblem;
    int badAverage = 0, counterBadGrade = 0, grade, numberOfTasks = 0;
    double average = 0, sum = 0;

    cin >> badAverage;
    cin.ignore();
    getline(cin, input);
    cin >> grade;

    while (true){
        cin.ignore();
        if(grade <= 4){
            counterBadGrade ++;
        }
        if (counterBadGrade == badAverage)break;
        sum += grade;
        numberOfTasks ++;
        lastOfProblem = input;
        getline(cin, input);
        if (input != "Enough"){
            lastOfProblem = input;
        }
        if (input == "Enough")break;
        cin >> grade;


    }
    average =  sum / numberOfTasks;
    if(counterBadGrade < badAverage) {
    cout << fixed << setprecision(2) << "Average score: "<< average << endl;
    cout << "Number of problems: " << numberOfTasks << endl;
    cout << "Last problem: " << lastOfProblem << endl;
    }
    else {
        cout << "You need a break, " << badAverage << " poor grades." << endl;
    }
    return 0;
}


