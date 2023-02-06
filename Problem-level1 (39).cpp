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
float CalculateReminder(int TotalBill, int TotalCashPaid) {
	return TotalBill - TotalCashPaid;
}
int main() {
	float TotalBill = ReadPositiveNumbers("Please enter Total Bill\n");
	float TotalCashPaid = ReadPositiveNumbers("Please enter Total Cash Paid\n");
	cout << "\n\nTotal Bill = " << TotalBill << endl;
	cout << "Total Cash Paid = " << TotalCashPaid << endl;
	cout << "\n**********************************\n";
	float Reminder = CalculateReminder(TotalBill, TotalCashPaid);
	cout << "Reminder = " << Reminder << endl;

}