#include "finleasecalc.h"
#include <iostream>
#include <string>

using namespace std;

finleasecalc::finleasecalc()
{
    float carPrice;
    float percentage;
    float months;
    float firstPayment;
    float startLeaseAccountPercentage;

    cout << "Please enter the car price (e.g. 25000):";
    cin >> carPrice;

    cout << "Please enter the bank proposed percentage (e.g. 2.25):";
    cin >> percentage;

    cout << "Please enter the months (e.g. 60):";
    cin >> months;

    cout << "Please enter the first payment in % (e.g. 15):";
    cin >> firstPayment;

    cout << "Please enter the bank % that it takes for starting a lease account (e.g. 1.5):";
    cin >> startLeaseAccountPercentage;

    float firstPaymentFromPercent = carPrice * firstPayment / 100; // First payment calculated in EUR
    float percentedCarPrice = (carPrice * percentage / 100) + carPrice; // Added bank % to that
    float needsToBePaid = percentedCarPrice - firstPaymentFromPercent; // This is the sum that needs to be paid during the lease agreement period
    float monthlyPayment = needsToBePaid / (months + 1); // This is the monthly payment calculated
    float monthlyPayment2 = needsToBePaid / months; // This is the monthly payment calculated
    float monthlyPaymentFinal = (monthlyPayment2 + monthlyPayment) / 2; // Finds the real monthly payment

    cout.precision(2);
    cout << fixed << "Monthly payment for this operating lease will be: " << monthlyPaymentFinal << "EUR" << endl;
}
