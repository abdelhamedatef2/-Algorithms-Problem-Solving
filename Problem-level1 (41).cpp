#include <iostream>
#include <string>
using namespace std;
int ReadPositiveNumbers(string massege) {
	float num = 0;
	do
	{
		cout << massege;
		cin >> num;
	} while (num <= 0);
	return num;
}
float Hourstodays(float hours) {
	float HoursToDays = hours / 24;
	return HoursToDays;
}
float HourstoWeeks(float hours) {
	float HoursToWeeks = (hours / 24)/7 ;
	return HoursToWeeks;
}
int main() {
	float NumberOfHours = ReadPositiveNumbers("Please enter number of hours\n");
	cout << "Number of days is : " << Hourstodays(NumberOfHours) << endl;
	cout << "Number of weeks is : " << HourstoWeeks(NumberOfHours) << endl;
}