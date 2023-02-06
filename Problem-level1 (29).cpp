#include <iostream>
#include <string>
using namespace std;
enum enNumberType{odd=1 , even=2};
int ReadNumber() {
	int num;
	cout << "Please , enter number \n";
	cin >> num;
	return num;
}
int CheckOddEven(int num) {
	if (num % 2 == 0)
		return enNumberType::even;
	else
		return enNumberType::odd;
}
int SumOfNumbers(int num) {
	int sum=0 ;
	int i=0 ;
	for (i = 1; i <= num; i++) {
		if (CheckOddEven(i) == enNumberType::even) {
			sum += i;
		}
	}
	return sum;
}
void PrintNumber(int sum) {
	cout << sum;
}
int main(){
	PrintNumber(SumOfNumbers(ReadNumber()));
}