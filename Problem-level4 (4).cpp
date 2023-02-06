#include <iostream>
#include <string>
using namespace std;
struct stPeriodInTheYear {
	int NumberOfDays=0;
	int NumberOfHours=0;
	int NumberOfMinutes=0;
	int NumberOfSeconds=0;
};
bool IsLeapYear(int Year)
{
	return (Year % 400 == 0) ? true : ((Year % 4 == 0) ? ((Year % 100 != 0) ? true : false) : false);
}
int ReadNumber()
{
	int Number;
	cout << "\nEnter a Number? ";
	cin >> Number;
	return Number;
}
stPeriodInTheYear PeriodInTheYear(int Year)
{
	stPeriodInTheYear PeriodInTheYear;
	if (IsLeapYear(Year) == true)
	{
		PeriodInTheYear.NumberOfDays = 366;
		PeriodInTheYear.NumberOfHours = PeriodInTheYear.NumberOfDays * 24;
		PeriodInTheYear.NumberOfMinutes = PeriodInTheYear.NumberOfHours * 60;
		PeriodInTheYear.NumberOfSeconds = PeriodInTheYear.NumberOfMinutes * 60;
	}
	else
	{
		PeriodInTheYear.NumberOfDays = 365;
		PeriodInTheYear.NumberOfHours = PeriodInTheYear.NumberOfDays * 24;
		PeriodInTheYear.NumberOfMinutes = PeriodInTheYear.NumberOfHours * 60;
		PeriodInTheYear.NumberOfSeconds = PeriodInTheYear.NumberOfMinutes * 60;
	}
	return PeriodInTheYear;
}
void PrintPeriodOfTheYear(stPeriodInTheYear PeriodInTheYear , int Year)
{
	cout << "Number Of Days In a Year " << Year << " IS = " << PeriodInTheYear.NumberOfDays << endl;
	cout << "Number Of Hours In a Year " << Year << " IS = " << PeriodInTheYear.NumberOfHours << endl;
	cout << "Number Of Minutes In a Year " << Year << " IS = " << PeriodInTheYear.NumberOfMinutes << endl;
	cout << "Number Of Seconds In a Year " << Year << " IS = " << PeriodInTheYear.NumberOfSeconds << endl;
}
int main()
{
	int Year = ReadNumber();
	PrintPeriodOfTheYear(PeriodInTheYear(Year), Year);
	system("pause>0");
	return 0;
}
