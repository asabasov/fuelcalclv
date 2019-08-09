#include "fuelcalc.h"
#include <iostream>
#include <string>

using namespace std;

fuelcalc::fuelcalc()
{
    float fc;
    int range;
    float cash;
    cout << "Please enter the fuel consumption in l/100km (e.g. 0.0):";
    cin >> fc;
    cout << "Please enter the planned range in km/year (e.g. 10000):";
    cin >> range;
    cout << "Please enter the current fuel price (e.g. 1.125):";
    cin >> cash;
    cout << "Now some calculations will be performed..." << endl;
    float exp = range / 100 * fc * cash;
    cout << "Expenses are planned to be: " << exp << " EUR" << endl;
}
