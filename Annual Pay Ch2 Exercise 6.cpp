// Annual Pay Ch2 Exercise 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	float payAmount, payPeriods;
	

	cout << "How many pay periods do you have in a year?:" << endl;

	cin >> payPeriods; 

	cout << "How much per paycheck are you being paid?" << endl;

	cin >> payAmount;

	float annualPay = payAmount * payPeriods;

	cout << "Your total annual pay is:" << " " << annualPay;

	
}