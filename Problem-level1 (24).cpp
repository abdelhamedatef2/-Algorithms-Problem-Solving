#include <iostream>
#include <string>
using namespace std;
int ReadAge() {
	int age;
	cout << "Enter Age , please\n";
	cin >> age;
	return age;
}
bool ValidateNumberInRange(int num, int from, int to) {
	return (num >= from && num <= to);
}
void PrintResult(int age) {
		if (ValidateNumberInRange(age, 18, 45))
			cout << age << "  Is a vaild age \n";
		else
			cout << age << "  Is a invaild age \n";
}

int main(){
	PrintResult(ReadAge());
}