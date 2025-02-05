// Annual Pay Ch2 Exercise 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	float payAmount = 2200.0;
	int payPeriods = 26;
	float annualPay = payAmount * payPeriods;

	cout << "Paycheck amount every two weeks:" << " " << payAmount << endl;

	cout << "Pay periods per year:" << " " << payPeriods << endl;

	cout << "Total annual pay:" << " " << annualPay;

}