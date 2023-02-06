#include <iostream>
#include <string>
using namespace std;
int ReadPositiveNumber() {
	int num;
	cout << "Please , enter a positive number \n";
	cin >> num;
	if (num > 0)
		return num;
	else
		return ReadPositiveNumber();
}
int Factorial(int num) {
	int factorial = 1;
	int i = 1;
		for (i; i <= num; i++) 
			factorial = factorial * i;
		return factorial;
}
void PrintNumber(int factorial) {
	cout << factorial;
}
int main(){
	PrintNumber(Factorial(ReadPositiveNumber()));
}