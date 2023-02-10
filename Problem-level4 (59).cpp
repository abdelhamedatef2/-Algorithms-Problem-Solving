#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

struct stDate
{
	short Year;
	short Month;
	short Day;
};
stDate GetSystemDate()
{
	stDate Date;
	time_t t = time(0);
	tm* now = localtime(&t);
	Date.Year = now->tm_year + 1900;
	Date.Month = now->tm_mon + 1;
	Date.Day = now->tm_mday;
	return Date;
}
bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}
short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month>12)
		return 0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) :
		days[Month - 1];
}
short NumberOfDaysInAYear(short Year)
{
	return (IsLeapYear(Year) ? 366 : 365);
}
short NumberOfDaysFromTheBeginingOfTheYear(short Day, short Month, short Year)
{
	short TotalDays = 0;
	for (int i = 1; i <= Month - 1; i++)
	{
		TotalDays += NumberOfDaysInAMonth(i, Year);
	}
	TotalDays += Day;
	return TotalDays;
}
short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + (12 * a) - 2;
	// Gregorian:
	//0:sun, 1:Mon, 2:Tue...etc
	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m)
		/ 12)) % 7;
}
short DayOfWeekOrder(stDate Date)
{
	return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
}
string DayShortName(short DayOfWeekOrder)
{
	string arrDayNames[] = {
	"Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return arrDayNames[DayOfWeekOrder];
}
string MonthShortName(short MonthNumber)
{
	string Months[12] = { "Jan", "Feb", "Mar",
	"Apr", "May", "Jun",
	"Jul", "Aug", "Sep",
	"Oct", "Nov", "Dec"
	};
	return (Months[MonthNumber - 1]);
}
bool IsLastDayInMonth(stDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month,
		Date.Year));
}
bool IsLastMonthInYear(short Month)
{
	return (Month == 12);
}
stDate IncreaseDateByOneDay(stDate Date)
{
	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else
		{
			Date.Day = 1;
			Date.Month++;
		}
	}
	else
	{
		Date.Day++;
	}
	return Date;
}
bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}
int GetDifferenceInDays(stDate Date1, stDate Date2, bool IncludeEndDay = false)
{
	int Days = 0;
	while (IsDate1BeforeDate2(Date1, Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}
	return IncludeEndDay ? ++Days : Days;
}
bool IsEndOfWeek(stDate Date)
{
	return (DayOfWeekOrder(Date) == 6) ? true : false;
}
bool IsWeekEnd(stDate Date)
{
	return ((DayOfWeekOrder(Date) == 5|| DayOfWeekOrder(Date) == 6) )? true : false;
}
bool IsBusinessDay(stDate Date)
{
	return !IsWeekEnd(Date) ? true : false;
}
short DaysUntilEndOfWeek(stDate Date)
{
	return 6 - DayOfWeekOrder(Date);
}
short DaysUntilTheEndOfMonth(stDate Date1)
{
	stDate EndOfMontDate;
	EndOfMontDate.Day = NumberOfDaysInAMonth(Date1.Month,
		Date1.Year);
	EndOfMontDate.Month = Date1.Month;
	EndOfMontDate.Year = Date1.Year;
	return GetDifferenceInDays(Date1, EndOfMontDate, true);
}
short DaysUntilTheEndOfYear(stDate Date1)
{
	stDate EndOfYearDate;
	EndOfYearDate.Day = 31;
	EndOfYearDate.Month = 12;
	EndOfYearDate.Year = Date1.Year;
	return GetDifferenceInDays(Date1, EndOfYearDate, true);
}
short CalculateVacationDays(stDate DateFrom, stDate DateTo)
{
	short i = 0;
	short WeekEndsCounter = 0;
	for (i = DateFrom.Day; i <= DateTo.Day; i++)
	{
		if (i == IsWeekEnd(DateTo))
		{
			WeekEndsCounter ++;
		}
		i ++ ;
	}
	return i - WeekEndsCounter;
}
bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year == Date2.Year) ? ((Date1.Month ==Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false): false;
}
bool IsDate1AfterDate2(stDate Date1, stDate Date2)
{
	return (!IsDate1BeforeDate2(Date1, Date2) &&!IsDate1EqualDate2(Date1, Date2));
}
enum enDateCompare { Before = -1, Equal = 0, After = 1 };
enDateCompare CompareDates(stDate Date1, stDate Date2)
{
	if (IsDate1BeforeDate2(Date1, Date2))
		return enDateCompare::Before;
	if (IsDate1EqualDate2(Date1, Date2))
		return enDateCompare::Equal;
	return enDateCompare::After;
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
	cout << "Please enter a Month? ";
	cin >> Month;
	return Month;
}
short ReadYear()
{
	short Year;
	cout << "Please enter a Year? ";
	cin >> Year;
	return Year;
}
stDate ReadFullDate()
{
	stDate Date;
	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();
	return Date;
}
struct stPeriod {
	stDate StartDate;
	stDate EndDate;
};
stPeriod ReadPeriod(short PeriodNumber)
{	
	stPeriod Period;
	cout << "Enter Period " << PeriodNumber << " : \n-------------------\n";
	cout << "Enter start Date : \n-------------------\n";
	Period.StartDate = ReadFullDate() ;
	cout << "\nEnter End Date : \n-------------------\n";
	Period.EndDate = ReadFullDate();
	return Period;
}
bool IsOverLap(stPeriod Period1, stPeriod Period2)
{
	if (CompareDates(Period2.EndDate, Period1.StartDate) ==enDateCompare::Before||
		CompareDates(Period2.StartDate, Period1.EndDate) ==enDateCompare::After)
		return false;
	else
		return true;
}
int PeriodLengthInDays(stPeriod Period , bool IncludeEndDate=false)
{	
	return GetDifferenceInDays(Period.StartDate, Period.EndDate,IncludeEndDate);
}
int main()
{	
	stPeriod Period1 = ReadPeriod(1);
	cout << endl;
	cout<<"Period Length is "<< PeriodLengthInDays(Period1) << endl;
	cout << "Period Length [including end date] is " << PeriodLengthInDays(Period1,true) << endl;

	system("pause>0");
	return 0;
}
