#include "yFunction.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "select.h"
#include "leasecalc.h"

using namespace std;

yFunction::yFunction()
{
    system("CLS");
    cout << "Operating lease calculator started successfully!" << endl;
    leasecalc();
    select();
}
