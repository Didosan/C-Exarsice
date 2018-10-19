#include <iostream>

using namespace std;

main(){
    int a; cin >> a;

    if ((a < 100 || a > 200) && a != 0){
        cout << "invalid" << endl;
    }

    return 0;
}
