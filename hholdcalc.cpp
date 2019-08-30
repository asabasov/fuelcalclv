#include "hholdcalc.h"
#include <iostream>

using namespace std;

hholdcalc::hholdcalc()
{
    int salary;
    int flatexp;
    cout << "Now we have to calculate the monthly house hold expenses!" << endl;
    cout << "Please enter your salary: ";
    cin >> salary;
    cout << "Your salary is " << salary << "EUR fixed." << endl;
    cout << "Please enter your house/flat rent expense: ";
    cin >> flatexp;
}
