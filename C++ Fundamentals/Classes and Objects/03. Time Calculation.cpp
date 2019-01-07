#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Time
{
public:
	int hour = 0;
	int min = 0;
	int secont = 0;



	Time() :
		hour(hour),
		min(min),
		secont(secont) {
	}

	~Time()
	{
	}
};

void calculateTimeandPrint(Time t) {


	int secont = ((t.hour * 3600) + (t.min * 60) + t.secont);
	int min = secont / 60;
	int hour = min / 60;

	cout << hour << endl;
	cout << min << endl;
	cout << secont << endl;


}




int main() {
	Time time;

	cin >> time.hour >> time.min >> time.secont;

	calculateTimeandPrint(time);




	return 0;
}