#include "hholdcalc.h"
#include <iostream>

using namespace std;

hholdcalc::hholdcalc()
{
    int salary;
    int flatexp;
    int flatutilexp;
    int fuelexp;
    cout << "Now we have to calculate the monthly house hold expenses!" << endl;
    cout << "Please enter your salary: ";
    cin >> salary;
    cout << "Your salary is " << salary << "EUR fixed." << endl;
    cout << "Please enter your house/flat rent expense: ";
    cin >> flatexp;
    cout << "Please enter your house/flat utility expense: ";
    cin >> flatutilexp;
    cout << "Please enter your car lease expense: ";
    cin >> fuelexp;
    int formula = flatexp + flatutilexp + fuelexp;
    cout << "Your monthly expense is " << formula << endl;
    if (formula >= salary) {
        cout << "You earn less than you spend!" << endl;
        cout << "Please consider your spendings!" << endl;
    } else {
        cout << "Nice one!" << endl;
        cout << "You are a financially responsible person!" << endl;
    }
    cout << "Your expenditures are " << formula % salary / 10 << "% of your salary!" << endl;
}
