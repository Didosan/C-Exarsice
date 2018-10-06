#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    cin >> name;
    double grades = 1;
    double sum = 0;

    while (grades <= 12){
        double grade;
        cin >> grade;
        if (grade >= 4.00){
            sum += grade;
            grades++;
        }

    }
    double average = sum / 12;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << name << " graduated. Average grade: " << average << endl;




    return 0;
}
