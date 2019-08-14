#include "zFunction.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "fuelcalc.h"
#include "select.h"
#include "finleasecalc.h"

using namespace std;

zFunction::zFunction()
{
    system("CLS");
    cout << "Finance lease calculator started successfully!" << endl;
    finleasecalc();
    select();
}
