#include <iostream>
#include <map>
#include <cmath>
#include <string>


using namespace std;

int main(){

    int n, salary,sum = 0,globa = 0;
    string input;
    cin >> n >> salary;

    for(int i = 0; i < n; i++){
        cin >> input;

        if(input == "Facebook"){
           globa = 150;
        }else if (input == "Instagram"){
            globa = 100;
        }else if (input == "Reddit"){
            globa = 50;
        }
        salary -= globa;
        globa = 0;
        if (salary <= 0){
            break;
        }
    }

    if (salary <= 0){
        cout << "You have lost your salary." << endl;
    }else{
        cout << salary << endl;
    }



    return 0;
}

