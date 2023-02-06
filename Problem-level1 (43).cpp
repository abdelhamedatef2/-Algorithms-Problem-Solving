#include <iostream>
#include <string>
using namespace std;
struct stTaskDuration {
	int NumbersOfDays ,NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
int ReadPositiveNumbers(string massege) {
	int num = 0;
	do
	{
		cout << massege;
		cin >> num;
	} while (num <= 0);
	return num;
}
stTaskDuration SecondsToTaskDuration(int TotalSeconds) {
	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHour = 60 * 60;
	const int SecondPerMinute = 60;
	stTaskDuration TaskDuration;
	int Reminder = 0;
	TaskDuration.NumbersOfDays = floor(TotalSeconds / SecondsPerDay);
	Reminder = TotalSeconds % SecondsPerDay;
	TaskDuration.NumberOfHours = floor(Reminder/ SecondsPerHour);
	Reminder = Reminder % SecondsPerHour;
	TaskDuration.NumberOfMinutes = floor(Reminder / SecondPerMinute);
	Reminder = Reminder % SecondPerMinute;
	TaskDuration.NumberOfSeconds = Reminder;
	return TaskDuration;
}
void PrintTaskDurationDetails(stTaskDuration TaskDuration) {
	cout << TaskDuration.NumbersOfDays << " Days" << endl;
	cout << TaskDuration.NumberOfHours << " Hours" << endl;
	cout << TaskDuration.NumberOfMinutes << "Minutes" << endl;
	cout << TaskDuration.NumberOfSeconds << "Seconds" << endl;
}
int main() {
	float t=ReadPositiveNumbers("Please enter number of seconds\n");
	PrintTaskDurationDetails(SecondsToTaskDuration(t));
}