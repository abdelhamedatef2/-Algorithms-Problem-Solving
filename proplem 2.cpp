#include <iostream>
#include <string>
using namespace std;
void IsLeapYear(int Number)
{	
	if (Number %400==0)
	{
		cout << "Is a leap year \n";
	}
	else if (Number %4 == 0 && Number % 100 != 0)
	{
		cout << "Is a leap year \n";
	}
	else
	{
		cout << "Is Not a leap year \n";

	}
	
}
int ReadNumber()
{
	int Number;
	cout << "\nEnter a Number? ";
	cin >> Number;
	return Number;
}
int main()
{
	int Number = ReadNumber();
	IsLeapYear(Number);
	system("pause>0");
	return 0;
}