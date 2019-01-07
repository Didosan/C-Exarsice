#include <iostream>
#include <map>
#include <math.h>

using namespace std;

int main()
{
    int volumeCup;
    cin >> volumeCup;
    int counter = 0;
    int volume, overallVolume = 0;

    string button;

    while (overallVolume < volumeCup){
            if (overallVolume > volumeCup){
                break;
            }
            if (overallVolume == volumeCup){
                break;
            }
        cin >> button;


        if(button == "Easy"){
            volume = 50;

        }else if (button == "Medium"){
            volume = 100;

        }else if (button == "Hard"){
            volume = 200;

        }

        overallVolume += volume;
        counter ++;
    }
    if (overallVolume > volumeCup){
        cout << overallVolume - volumeCup << "ml has been spilled." << endl;
    }else{
        cout << "The dispenser has been tapped " << counter << " times." << endl;

    }




    return 0;
}

