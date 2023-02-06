#include <iostream>
#include <string>
using namespace std;
enum enDaysOfWeek{Sat=1,Sun=2,Mon=3,Tue=4,Wen=5,Thu=6,Fri=7};
int ReadNumbersInRange(string massege,int From , int To) {
	int num = 0;
	do
	{
		cout << massege;
		cin >> num;
	} while (num < From || num > To);
	return num;
}
enDaysOfWeek ReadDaysOfWeek() {
	return 	(enDaysOfWeek)ReadNumbersInRange("Please Enter number of the day\n", 1, 7);
}
string GetDayOfWeek(enDaysOfWeek Day)
{
	switch (Day)
	{
	case enDaysOfWeek::Sat:
		return"Saturday";
	case enDaysOfWeek::Sun:
		return"Sunday";
	case enDaysOfWeek::Mon:
		return"Monday";
	case enDaysOfWeek::Tue:
		return"Tuesday";
	case enDaysOfWeek::Wen:
		return"Wensday";
	case enDaysOfWeek::Thu:
		return"Thursday";
	case enDaysOfWeek::Fri:
		return"Friday";
	}
}
int main() {
	cout<<GetDayOfWeek(ReadDaysOfWeek())<<endl;
}