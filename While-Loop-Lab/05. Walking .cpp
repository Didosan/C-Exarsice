#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    string input;
    getline(cin,input);

    int steps = 0;

    while (input != "Going home"){
        steps += stoi(input);
        if (steps >= 10000){
            break;
        }
        getline(cin,input);


        }
        if (input == "Going home"){
            string stepsToHomeAsStr;
            getline(cin, stepsToHomeAsStr);
            steps += stoi(stepsToHomeAsStr);
            }
        if (steps >= 10000){
            cout << "Goal reached! Good job!" << endl;
        }else{
            cout << 10000 - steps << " more steps to reach goal." << endl;
        }













    return 0;
}
