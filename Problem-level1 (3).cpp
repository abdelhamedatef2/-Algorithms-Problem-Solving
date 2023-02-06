#include <iostream>
#include <string>

using namespace std;
enum enNumberType{odd=1,even=2};
int ReadNumber() {
	int number;
	cout << "Plaese enter your number \n";
	cin >> number;
	return number;
}
enNumberType CheckNumberType(int number) {
	if (number % 2 == 0)
		return enNumberType::even;
	else
		return enNumberType::odd;
}
void PrintNumber(enNumberType number) {
	if (number == ::odd)
		cout << "number is ODD\n";
	else
		cout << "number is EVEN\n";
}

int main()
{
	PrintNumber(CheckNumberType(ReadNumber()));
}

