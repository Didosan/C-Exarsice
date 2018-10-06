#include <iostream>
#include <map>
#include <string>
#include <iomanip>


using namespace std;

int main(){
    double numberToCalculate;
    string metrics;
    string metricsExit;

    cin >> numberToCalculate >> metrics >> metricsExit;
    map<string, double> currencies;
    currencies ["m"] = 1;
    currencies ["mm"] = 1000;
    currencies ["cm"] = 100;
    currencies ["mi"] = 0.000621371192;
    currencies ["in"] = 39.3700787;
    currencies ["km"] = 0.001;
    currencies ["ft"] = 3.2808399;
    currencies ["yd"] = 1.0936133;

    double result = numberToCalculate / currencies[metrics] * currencies[metricsExit];
    cout << fixed << setprecision(8) << result << endl;

    return 0;
}

