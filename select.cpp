#include "select.h"
#include "xFunction.h"
#include "yFunction.h"
#include "zFunction.h"
#include "cFunction.h"
#include "tFunction.h"
#include <iostream>
#include <string>

using namespace std;

select::select()
{
    cout << "Now you have to select what will be the next step:" << endl;
    cout << "(x) Open fuel expense calculator" << endl;
    cout << "(y) Open operating lease calculator" << endl;
    cout << "(z) Open finance lease calculator" << endl;
    cout << "(c) Open monthly expenses calculator" << endl;
    cout << "(t) Open taxi income calculator" << endl;
    cout << "Press any other key to interrupt the application!" << endl;
    char selectC;
    string version = "version 1.2.1";
    cin >> selectC;
    switch (selectC) {
    case 'x':
        cout << "Calling the function!" << endl;
        xFunction();
    break;
    case 'y':
        cout << "Calling the function!" << endl;
        yFunction();
    break;
    case 'z':
        cout << "Calling the function!" << endl;
        zFunction();
    case 'c':
        cout << "Calling the function!" << endl;
        cFunction();
    case 't':
        cout << "Calling the function!" << endl;
        tFunction();
    default:
        cout << "Thank you for using FuelCalcLV " << version << "!" << endl;
    }
}
