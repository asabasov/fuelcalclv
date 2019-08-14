#include "intro.h"
#include "select.h"
#include <string>
#include <iostream>
using namespace std;

intro::intro()
{
    string version = "version 1.2.1";
    cout << "This is a FuelCalcLV " << version << " by A.Sabasovs" << endl;
    cout << "Made for Latvian conditions" << endl;
    cout << "__________________________________________________" << endl;
    cout << endl;
}
