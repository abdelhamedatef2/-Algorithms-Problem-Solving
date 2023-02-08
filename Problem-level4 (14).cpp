#include <iostream>
using namespace std;
bool isLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}
short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month>12)
		return 0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) :
		days[Month - 1];
}
short NumberOfDaysInAYear( short Year)
{
	return (isLeapYear(Year) ? 366 : 365);
}
short NumberOfDaysFromTheBeginingOfTheYear(short Day, short Month,short Year)
{
	short TotalDays = 0;
	for (int i = 1; i <= Month - 1; i++)
	{
		TotalDays += NumberOfDaysInAMonth(i, Year);
	}
	TotalDays += Day;
	return TotalDays;
}
struct sDate
{
	short Year;
	short Month;
	short Day;
};
sDate GetDateFromDayOrderInYear(short DateOrderInYear, short Year)
{
	sDate Date;
	short RemainingDays = DateOrderInYear;
	short MonthDays = 0;
	Date.Year = Year;
	Date.Month = 1;
	while (true)
	{
		MonthDays = NumberOfDaysInAMonth(Date.Month, Year);
		if (RemainingDays > MonthDays)
		{
			RemainingDays -= MonthDays;
			Date.Month++;
		}
		else
		{
			Date.Day = RemainingDays;
			break;
		}
	}
	return Date;
}
sDate GetDateAfterAddDays(short DayAfterAdded, short Year)
{
	sDate Date;
	short RemainingDays = DayAfterAdded;
	short MonthDays = 0;
	short YearDays=0;
	Date.Month = 1;
	Date.Year = Year;
	while (true)
	{
		YearDays = NumberOfDaysInAYear(Date.Year);
		MonthDays = NumberOfDaysInAMonth(Date.Month, Year);
		
		if (RemainingDays > YearDays)
		{
			RemainingDays -= YearDays;
			Date.Year++;
		}
		if (RemainingDays > MonthDays)
		{
			RemainingDays -= MonthDays;
			Date.Month++;
		}
		else
		{
			Date.Day = RemainingDays;
			break;
		}
	}
	return Date;
}
bool CompareTwoDates(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==Date2.Year) ?(Date1.Month < Date2.Month ? true : (Date1.Month ==Date2.Month ?Date1.Day < Date2.Day : false)) : false);
}
short ReadDay()
{
	short Day;
	cout << "\nPlease enter a Day? ";
	cin >> Day;
	return Day;
}
short ReadMonth()
{
	short Month;
	cout << "\nPlease enter a Month? ";
	cin >> Month;
	return Month;
}
short ReadYear()
{
	short Year;
	cout << "\nPlease enter a Year? ";
	cin >> Year;
	return Year;
}
sDate ReadFullDate()
{
	sDate Date;
	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();
	return Date;
}
short ReadAddedDays()
{
	short AddedDays;
	cout << "\nPlease enter a days to add? ";
	cin >> AddedDays;
	return AddedDays;
}
int main()
{
	sDate Date1 = ReadFullDate();
	sDate Date2 = ReadFullDate();
	if (CompareTwoDates(Date1, Date2))
		cout << "\nYes, Date1 is Less than Date2.";
	else
		cout << "\nNo, Date1 is NOT Less than Date2.";
	system("pause>0");
	return 0;
}		