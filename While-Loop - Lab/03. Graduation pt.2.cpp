#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    string name;
    cin >> name;
    double grades = 1;
    double sum = 0;
    bool passed = true;
    while (grades <= 12){
        double grade;
        cin >> grade;
        if (grade >= 4.00){
            sum += grade;
            grades++;
        }else if (passed){
            passed = false;

        }else{
            break;

        }
    }
    double average = sum / 12;

    if(grades > 12){
        cout << fixed << setprecision(2) << name << " graduated. Average grade: " << average << endl;
    }else {
        cout << name << " has been excluded at " << grades << " grade" << endl;
    }





    return 0;
}

