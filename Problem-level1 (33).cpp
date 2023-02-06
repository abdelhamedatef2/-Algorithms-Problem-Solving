#include <iostream>
#include <string>
using namespace std;
int ReadNumber() {
	int num = 0;
	cout << "Please enter mark\n";
	cin >> num;
	if (num <= 100 && num >= 0)
		return num;
	else
		return ReadNumber();
}

void PrintGrades(int num){
	if (num > 90)
		cout << "your Grade is A";
	else if (num >80)
		cout << "your Grade is B";
	else if (num > 70)
		cout << "your Grade is C";
	else if (num > 60)
		cout << "your Grade is D";
	else if (num > 50)
		cout << "your Grade is E";
	else if (num < 50)
		cout << "your Grade is F";
}
int main(){
	PrintGrades(ReadNumber());
}

=============================================================

#include <iostream>
#include <string>
using namespace std;
int ReadNumberInRange(int from , int to) {
	int num = 0;
	do {
		cout << "Please enter mark between 0 and 100\n";
		cin >> num;
	} while (num >= to || num <= from);
		return num ;
}

void PrintGrades(int num){
	if (num > 90)
		cout << "your Grade is A";
	else if (num >80)
		cout << "your Grade is B";
	else if (num > 70)
		cout << "your Grade is C";
	else if (num > 60)
		cout << "your Grade is D";
	else if (num > 50)
		cout << "your Grade is E";
	else if (num < 50)
		cout << "your Grade is F";
}
int main(){
	PrintGrades(ReadNumberInRange(0, 100));
}