#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>


using namespace std;

int main(){
    int cakeWight, cakeLength;
    int cakeArea = 0;
    int pcsLeft = 0;
    string input;

    cin >> cakeWight >> cakeLength;
    cakeArea = cakeWight * cakeLength;
    cin >> input;
    while (input != "STOP"){

        pcsLeft = cakeArea - stoi(input);
        cakeArea = pcsLeft;

        if(cakeArea <= 0){

            break;
        }
        if (input == "STOP"){

            break;
        }
        cin >> input;

    }
    if(cakeArea <= 0){
                cout << "No more cake left! You need " << abs(pcsLeft)
            << " pieces more." << endl;

        }
        if (input == "STOP"){
            cout << pcsLeft << " pieces are left." << endl;

        }



    return 0;
}



