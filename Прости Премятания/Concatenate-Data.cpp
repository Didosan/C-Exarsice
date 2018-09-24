#include <iostream>
#include <string>

using namespace std;

int main(){

    string FirstName;
    string SecondName;
    int Age;
    string Town;
    cin >> FirstName >> SecondName >> Age >> Town ;

    cout << "You are " << FirstName  <<" " << SecondName  <<", a " << Age << "-years old person from "<< Town << ".";

    return 0;
}
