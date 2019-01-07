#include <iostream>

using namespace std;


int main(){
    int n;
    double counter = 0.0;
    cin >> n;
    double balanse = 0.0;
    cout.setf(ios::fixed);
    cout.precision(2);
    while (counter < n){
        double amount; cin >> amount;
        if (amount < 0){
            cout << "Invalid operation!" << endl;
            break;
        }
        balanse += amount;
        cout << "Increase: " << balanse << endl;
        counter++;


    }

    cout << "Total: " << balanse << endl;





    return 0;
}
