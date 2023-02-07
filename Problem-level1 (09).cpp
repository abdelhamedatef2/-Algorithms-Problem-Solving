#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(int &num1, int &num2 , int &num3) {
	cout << "Please , enter number1 \n";
	cin >> num1;
	cout << "Please , enter number2 \n";
	cin >> num2;
	cout << "Please , enter number3 \n";
	cin >> num3;
}
int SumOf3Numbers(int num1,int num2,int num3) {
	return num1 + num2 + num3;
}
void PrintResult(int total) {
	cout << "Sum of the numbers is : " << total;
}
int main()
{
	int num1, num2, num3;
	ReadNumbers(num1, num2, num3);
	PrintResult(SumOf3Numbers(num1, num2, num3));
	}

