#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double a, b ;
	cout << " Please input your pay rate of an hour: " << endl;
	cin >> a;
	cout << " Please input your hour worked: " << endl;
	cin >> b; 
	cout <<"Gross income=" << a*b <<"$"<< endl;
	cout <<"Net income after taxes=" << a*b-a*b*0.14 <<"$"<< endl;
	cout <<"The money you spend on clothes and other accessories=" << (a*b-a*b*0.14)*0.1 <<"$"<< endl;
	cout <<"The money you spend on school supplies=" << (a*b-a*b*0.14)*0.01 <<"$"<< endl;
	cout <<"The money you spend to buy saving bonds=" << ((a*b-a*b*0.14)-((a*b-a*b*0.14)*0.1)-((a*b-a*b*0.14)*0.01))*0.25 <<"$"<< endl;
	cout <<"The money your parents spend to buy additional saving bonds for you=" << (((a*b-a*b*0.14)-((a*b-a*b*0.14)*0.1)-((a*b-a*b*0.14)*0.01))*0.25)*0.5 <<"$"<< endl;
_getch();
return 0;
}