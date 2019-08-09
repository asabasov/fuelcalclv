#include "yFunction.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "fuelcalc.h"
#include "select.h"

using namespace std;

yFunction::yFunction()
{
    system("CLS");
    cout << "yFunction started successfully!" << endl;
    fuelcalc();
    select();
}
