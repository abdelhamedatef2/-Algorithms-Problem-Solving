#include <iostream>
#include <string>
using namespace std;
struct stPeriodInMonth {
	int NumberOfDays = 0;
	int NumberOfHours = 0;
	int NumberOfMinutes = 0;
	int NumberOfSeconds = 0;
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
stPeriodInMonth PeriodInMonth(int Year , int Month)
{
	stPeriodInMonth PeriodInMonth;
	if (IsLeapYear(Year) == true)
	{
		if (Month == 2)
		{
			PeriodInMonth.NumberOfDays = 29;
			PeriodInMonth.NumberOfHours = PeriodInMonth.NumberOfDays * 24;
			PeriodInMonth.NumberOfMinutes = PeriodInMonth.NumberOfHours * 60;
			PeriodInMonth.NumberOfSeconds = PeriodInMonth.NumberOfMinutes * 60;
		}
		else if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12)
		{
			PeriodInMonth.NumberOfDays = 31;
			PeriodInMonth.NumberOfHours = PeriodInMonth.NumberOfDays * 24;
			PeriodInMonth.NumberOfMinutes = PeriodInMonth.NumberOfHours * 60;
			PeriodInMonth.NumberOfSeconds = PeriodInMonth.NumberOfMinutes * 60;
		}
		else
		{
			PeriodInMonth.NumberOfDays = 30;
			PeriodInMonth.NumberOfHours = PeriodInMonth.NumberOfDays * 24;
			PeriodInMonth.NumberOfMinutes = PeriodInMonth.NumberOfHours * 60;
			PeriodInMonth.NumberOfSeconds = PeriodInMonth.NumberOfMinutes * 60;
		}
	}
	else
	{
		if (Month == 2)
		{
			PeriodInMonth.NumberOfDays = 28;
			PeriodInMonth.NumberOfHours = PeriodInMonth.NumberOfDays * 24;
			PeriodInMonth.NumberOfMinutes = PeriodInMonth.NumberOfHours * 60;
			PeriodInMonth.NumberOfSeconds = PeriodInMonth.NumberOfMinutes * 60;
		}
		else if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12)
		{
			PeriodInMonth.NumberOfDays = 31;
			PeriodInMonth.NumberOfHours = PeriodInMonth.NumberOfDays * 24;
			PeriodInMonth.NumberOfMinutes = PeriodInMonth.NumberOfHours * 60;
			PeriodInMonth.NumberOfSeconds = PeriodInMonth.NumberOfMinutes * 60;
		}
		else
		{
			PeriodInMonth.NumberOfDays = 30;
			PeriodInMonth.NumberOfHours = PeriodInMonth.NumberOfDays * 24;
			PeriodInMonth.NumberOfMinutes = PeriodInMonth.NumberOfHours * 60;
			PeriodInMonth.NumberOfSeconds = PeriodInMonth.NumberOfMinutes * 60;
		}
	}
	return PeriodInMonth;
}
void PrintPeriodInMonth(stPeriodInMonth PeriodInMonth, int Year)
{
	cout << "Number Of Days In a Month " << Year << " IS = " << PeriodInMonth.NumberOfDays << endl;
	cout << "Number Of Hours In a Month " << Year << " IS = " << PeriodInMonth.NumberOfHours << endl;
	cout << "Number Of Minutes In a Month " << Year << " IS = " << PeriodInMonth.NumberOfMinutes << endl;
	cout << "Number Of Seconds In a Month " << Year << " IS = " << PeriodInMonth.NumberOfSeconds << endl;
}
int main()
{
	cout << "Enter the year" << endl;
	int Year = ReadNumber();
	cout << "Enter the month \n";
	int Month = ReadNumber();
	PrintPeriodInMonth(PeriodInMonth(Year,Month), Year);
	system("pause>0");
	return 0;
}
