#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double PayRate, NumberHours;
	cout << "Please enter your Pay rate per hour and Number of hours you worked each week: " << endl;
	cin >> PayRate >> NumberHours;
	cout << "Pay rate per hour: " << PayRate << endl;
	cout << "Hours worked each week: " << NumberHours << endl;

	cout << "Gross Income: " << (15.5*NumberHours) << endl;
	cout << "Net Income: " << ((15.5*NumberHours)*.86) << endl;

	cout << "Money you spend on clothes and other accessories: " << (((15.5*NumberHours)*.86)*.1) << endl;

	cout << "Money you spend on school supplies: " << ((((15.5*NumberHours)*.86)*.9)*.01) << endl;

	cout << "Money you spend to buy savings bonds: " << (((((15.5*NumberHours)*.86)*.9)*.99)*.25) << endl;

	cout << "Money your parent spend to buy additional savings bonds for you: " << ((((((15.5*NumberHours)*.86)*.9)*.99)*.25)*0.5) << endl;
	_getch();
	return 0;
}