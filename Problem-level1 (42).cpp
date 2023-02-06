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
stTaskDuration ReadTaskDuration() {
	stTaskDuration TaskDuration;
	TaskDuration.NumbersOfDays = ReadPositiveNumbers("Enter number of days \n");
	TaskDuration.NumberOfHours = ReadPositiveNumbers("Enter number of hours \n");
	TaskDuration.NumberOfMinutes = ReadPositiveNumbers("Enter number of mintutes \n");
	TaskDuration.NumberOfSeconds = ReadPositiveNumbers("Enter number of seconds\n");
	return TaskDuration;
}
int TaskDurationInSeconds(stTaskDuration TaskDuration) {
	int DurationInSeconds = 0;
	DurationInSeconds = TaskDuration.NumberOfSeconds;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumbersOfDays * 24 * 60 * 60;
	return DurationInSeconds;
}
int main() {
	cout << TaskDurationInSeconds(ReadTaskDuration());
}