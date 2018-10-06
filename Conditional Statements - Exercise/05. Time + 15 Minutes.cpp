#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;


int main(){
    int hour, minets;

    cin >> hour >> minets;


      minets += 15;
      if (minets > 59){
        hour += 1;
        minets -= 60;
      }
      if(hour > 23){
        hour = 0;

      }
    printf("%0d:%02d", hour, minets);
    return 0;
}

