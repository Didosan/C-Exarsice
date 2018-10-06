#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    int maxNum = INT_MIN;
    int minNum = INT_MAX;
    string input = " ";
    while ( input != "END"){
            int currentNumber = stoi(input);
    if(currentNumber > maxNum){
        maxNum = currentNumber;
    }if(currentNumber < minNum){
        minNum = currentNumber;
    }
    cin >> input;
    }
    cout << "Max number: " << maxNum << endl;
    cout << "Min number: " << minNum << endl;




    return 0;
}
