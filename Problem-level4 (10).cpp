#include <iostream>
#include <string>

using namespace std;
short ReadYear()
{
	short Number;
	cout << "\nPlease enter a year to check? ";
	cin >> Number;
	return Number;
}
short ReadMonth()
{
	short Number;
	cout << "\nPlease enter a month to check? ";
	cin >> Number;
	return Number;
}
short ReadDay()
{
	short Number;
	cout << "\nPlease enter a Day to check? ";
	cin >> Number;
	return Number;
}
bool IsLeapYear(int Year)
{
	return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0) ? true : false;
}
short NumberOfDaysInMonth(short Month, short Year)
{
	if (Month < 1 || Month>12)
		return 0;
	if (Month == 2)
	{
		return IsLeapYear(Year) ? 29 : 28;
	}
	short arr[] = { 31,IsLeapYear(Year) ? 29 : 28,31,30,31,30,31,31,30,31,30,31 };
	return arr[Month - 1];
}
short NumberOfHoursInMonth(short Month, short Year)
{
	return NumberOfDaysInMonth(Month, Year) * 24;
}
int NumberOfMinutesInMonth(short Month, short Year)
{
	return NumberOfHoursInMonth(Month, Year) * 60;
}
int NumberOfSecondsInMonth(short Month, short Year)
{
	return NumberOfMinutesInMonth(Month, Year) * 60;
}
short DayOrderInWeek(short Year, short Month, short Day)
{
	int a = (14 - Month) / 12;
	int y = Year - a;
	int m = Month + (12 * a) - 2;
	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}
string DayShortName(short DayOfWeekOrder)
{
	string arrDayNames[] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return arrDayNames[DayOfWeekOrder];
}
void PrintDateData(short Year, short Month,short Day)
{
	printf("Date      : %d / %d / %d\n", Year, Month, Day);
	printf("Day Order : %d\n", DayOrderInWeek(Year, Month, Day));
	cout<< "Day Name  : "<<DayShortName(DayOrderInWeek(Year, Month, Day));
}
string MonthShortName(short Month)
{
	string MonthName[] = {"jun","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	return MonthName[Month-1];
}
void PrintMonthCalender(short Year, short Month)
{
	int current = DayOrderInWeek(Year, Month, 1);
	int NumberOfDays = NumberOfDaysInMonth(Month, Year);
	printf("\n\n---------------%s---------------\n\n", MonthShortName(Month).c_str());
	printf("   Sun  Mon  Tue  Wen  Thu  Fri  Sat \n");
	int i = 0;
	for (i; i < current; i++)
		cout << "     ";
	for (int j = 1; j <= NumberOfDays; j++)
	{
		printf("%5d", j);
		if (++i == 7)
		{
			i = 0;
			cout << endl;
		}
	}
}
void PrintYearCalender(short Year)
{
	printf("\n\n---------------%d---------------\n\n", Year);
	for (int i = 1; i <= 12; i++)
	{
		PrintMonthCalender(Year, i);
		cout << "\n\n";
	}
}

short NumberOfDaysInYear(short Month, short Year)
{
	return  NumberOfDaysInMonth(Month, Year) * 12;
}
int CalculateCompletedMonthsBeforeDay(short Month, short Year)
{
	short i = 0;
	int Days=0;
	for (i = 1; i <= 12; i++)
	{
		Days += NumberOfDaysInMonth(i, Year);
		if (i == (Month-1))
		{
			return Days;
		}
	}
}
int DayOrderInYear(short Year, short Month, short Day)
{
	return CalculateCompletedMonthsBeforeDay(Month, Year) + Day;
}
int main()
{
	int Year = ReadYear();
	int Month = ReadMonth();
	int Day = ReadDay();
	cout << "Number of the days from beging of the year is " << DayOrderInYear(Year,Month,Day) << endl;

	system("pause>0");
	return 0;
}
