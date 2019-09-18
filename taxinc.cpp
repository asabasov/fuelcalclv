#include "taxinc.h"
#include <iostream>

using namespace std;

taxinc::taxinc()
{
    cout << "Please select the class:" << endl;
    cout << "(a) Economy" << endl;
    cout << "(b) Comfort" << endl;
    char selClass;
    cin >> selClass;
    switch (selClass) {
        case 'a':
        cout << "Economy class" << endl;
        cout << "________________" << endl;
        cout << "Sit in fare: 0.71 EUR" << endl;
        cout << "For 1 km ride: 0.30 EUR" << endl;
        cout << "For 1 min waiting: 0.10 EUR" << endl;
        cout << "_________________" << endl;
        cout << "Now please enter your fuel expense calculated in another task (in EUR/selected range): " << endl;
        float expenses;
        float kilometrage;
        cin >> expenses;
        cout << "Now please enter the range in km for what is the fuel expense: " << endl;
        cin >> kilometrage;
        cout << "Let us perform some calculations..." << endl;
        float profit;
        profit = (0.71 + (kilometrage * (0.30))) - expenses;
        cout << "_________________" << endl;
        cout << "==================" << endl;
        cout << "For " << kilometrage << "km your profit will be " << profit << "EUR (minus expenses " << expenses << "EUR)" << endl;
        cout << "==================" << endl;
        cout << "_________________" << endl;
        cout << "Warning: time meter is not included in the calculation!" << endl;
        cout << "Warning: tips are not included in the calculation!" << endl;
        cout << "==================" << endl;
        break;
        case 'b':
        cout << "Comfort class" << endl;
        cout << "________________" << endl;
        cout << "Sit in fare: 2.00 EUR" << endl;
        cout << "For 1 km ride: 0.45 EUR" << endl;
        cout << "For 1 min waiting: 0.10 EUR" << endl;
        cout << "_________________" << endl;
        cout << "Now please enter your fuel expense calculated in another task (in EUR/selected range): " << endl;
        cin >> expenses;
        cout << "Now please enter the range in km for what is the fuel expense: " << endl;
        cin >> kilometrage;
        cout << "Let us perform some calculations..." << endl;
        profit = (2 + (kilometrage * (0.45))) - expenses;
        cout << "_________________" << endl;
        cout << "==================" << endl;
        cout << "For " << kilometrage << "km your profit will be " << profit << "EUR (minus expenses " << expenses << "EUR)" << endl;
        cout << "==================" << endl;
        cout << "Warning: time meter is not included in the calculation!" << endl;
        cout << "Warning: tips are not included in the calculation!" << endl;
        cout << "==================" << endl;
        cout << "_________________" << endl;
        break;
        default:
        cout << "Please select the proper class!" << endl;
    }
}


