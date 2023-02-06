#include <iostream>
#include <string>
using namespace std;
int ReadAge() {
	int age;
	cout << "Enter Age betwen 18 and 45 , please\n";
	cin >> age;
	return age;
}
bool ValidateNumberInRange(int num, int from, int to) {
	return (num >= from && num <= to);
}
int ReadUntilAgeBetween(int from , int to ) {
	int age = 0;
	do {
		age = ReadAge();
	}
		while (!ValidateNumberInRange(age, from, to));
	return age;
}
void PrintResult(int age) {
		if (ValidateNumberInRange(age, 18, 45))
			cout << age << "  Is a vaild age \n";
		else
			cout << age << "  Is a invaild age \n";
}

int main(){
	PrintResult(ReadUntilAgeBetween(18,45));
}