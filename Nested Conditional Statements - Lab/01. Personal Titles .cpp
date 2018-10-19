#include <iostream>

using namespace std;

int main(){
double age;
    char gender;

    cin >> age >> gender;

    if (gender == 'f'){
        if(age < 16){
            cout << "Miss" << endl;
        }else{
            cout << "Ms." << endl;
        }
    }
    else {
        if(age < 16 ){
            cout << "Master" << endl;
        }else {
            cout << "Mr." << endl;
        }
    }







    return 0;
}
