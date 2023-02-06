#include <iostream>
#include <string>
using namespace std;
bool IsLeapYear(int Number)
{
	return (Number % 400 == 0) ? true : ((Number % 4 == 0) ? ((Number % 100 != 0) ? true : false) : false);
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
	if (IsLeapYear(ReadNumber())==true)
		cout << "Is Leap year";
	else
		cout << "Not leap year";
	system("pause>0");
	return 0;
}
