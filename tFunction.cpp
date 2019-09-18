#include "tFunction.h"
#include <iostream>
#include "select.h"
#include "taxinc.h"

using namespace std;

tFunction::tFunction()
{
    cout << "Hello, this is a taxi income calculator!" << endl;
    taxinc();
    select();
}
