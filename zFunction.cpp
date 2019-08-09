#include "zFunction.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "fuelcalc.h"
#include "select.h"

using namespace std;

zFunction::zFunction()
{
    system("CLS");
    cout << "zFunction started successfully!" << endl;
    fuelcalc();
    select();
}
