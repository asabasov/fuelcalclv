#include "cFunction.h"
#include "select.h"
#include "hholdcalc.h"
#include <iostream>

using namespace std;

cFunction::cFunction()
{
    cout << "Hello, this is a house hold expense calculator!" << endl;
    hholdcalc();
    select();
}
