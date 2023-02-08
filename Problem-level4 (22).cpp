#include <iostream>
#pragma warning(disable : 4996)

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
bool CompareTwoDates(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==Date2.Year) ?(Date1.Month < Date2.Month ? true : (Date1.Month ==Date2.Month ?Date1.Day < Date2.Day : false)) : false);
}
bool IsLastMonthInYear(short Month)
{
	return(Month == 12) ? true : false;
}
bool IsLastDayInMonth(sDate Date)
{	
	return(Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year)) ? true : false;
		 
}
int DiffrenceBetweenTwoDates(sDate Date1, sDate Date2)
{
	int i = 0;
	int Diffrence = 0;
	int NumberOfDaysInoneYear = 0;
	int DiffrenceinYears = 0;
	int DiffrenceinDays = NumberOfDaysFromTheBeginingOfTheYear(Date2.Day,Date2.Month, Date2.Year)
						-NumberOfDaysFromTheBeginingOfTheYear(Date1.Day, Date1.Month, Date1.Year);
	if (Date2.Year > Date1.Year)
	{
		for (i = Date1.Year; i < Date2.Year; i++)
		{
			NumberOfDaysInoneYear = NumberOfDaysInAYear(i);
			DiffrenceinYears += NumberOfDaysInoneYear;
		}
		Diffrence = DiffrenceinDays + DiffrenceinYears;
	}
	return Diffrence;
	if (Date2.Year < Date1.Year)
	{
		DiffrenceBetweenTwoDates(Date1, Date2);
		return Diffrence * -1;
	}
	


}
sDate GetDateAfterAddDays(short DayAfterAdded, short Year)
{
	sDate Date;
	short RemainingDays = DayAfterAdded;
	short MonthDays = 0;
	short YearDays = 0;
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
sDate GetSystemDate()
{
	sDate Date;
	time_t t = time(0);
	tm* now = localtime(&t);
	Date.Year = now->tm_year + 1900;
	Date.Month = now->tm_mon + 1;
	Date.Day = now->tm_mday;
	return Date;
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

sDate IncreaseDateByOneDay(sDate Date)
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
sDate IncreaseDateByXDays(sDate Date,int AddedDays)
{
	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = Date.Day+AddedDays;
			Date.Year++;
		}
		else
		{
			Date.Day = Date.Day + AddedDays;
			Date.Month++;
		}
	}
	else
	{
		Date.Day = Date.Day + AddedDays;
	}
	return Date;
}
sDate IncreaseDateByOneWeek(sDate Date)
{
	short Week = 7;
	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = Date.Day + Week;
			Date.Year++;
		}
		else
		{
			Date.Day = Date.Day + Week;
			Date.Month++;
		}
	}
	else
	{
		Date.Day = Date.Day + Week;
	}
	return Date;
}

int main()
{
	sDate Date = ReadFullDate();
	Date = IncreaseDateByOneDay(Date);
	cout << "Date after adding  1 day is             : " << Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<< endl;
	Date = IncreaseDateByXDays(Date, 10);
	cout << "Date after adding 10 day is             : " << Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<< endl;
	Date = IncreaseDateByOneWeek(Date);
	cout << "Date after adding  1 week is            : " << Date.Day<<"/"<<Date.Month<<"/"<<Date.Year<< endl;
