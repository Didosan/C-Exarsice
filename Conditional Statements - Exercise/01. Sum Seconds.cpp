#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int secont1, secont2, secont3;
    cin >> secont1 >> secont2 >> secont3;

    int sum = secont1 + secont2 + secont3;
    int minets = 0;
    if(sum <= 59){
        printf("%0d:%02d",minets, sum);
    }
    else if(sum >=60 && sum <= 119){
        minets = 1;
        sum = sum - 60;
        printf("%0d:%02d",minets, sum);
    }
    else if(sum >= 120 && sum <= 179){
        minets = 2;
        sum = sum - 120;
        printf("%0d:%02d",minets, sum);
    }
    else if (sum < 10){
        minets = 0;
        printf("%0d:%02d",minets, sum);
    }




    return 0;

}
