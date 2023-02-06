#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(int &num1, int &num2 ) {
	cout << "Please , enter first number \n";
	cin >> num1;
	cout << "Please , enter second number \n";
	cin >> num2;
}
void PrintNumbers(int num1, int num2) {
	cout << "\n\nThe numbers is : " << endl;
	cout << " Number 1 = " << num1 << endl;
	cout << " Number 2 = " << num2 << endl;
}
void Swap(int &num1, int &num2){
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main()
{
	int num1,num2;
	ReadNumbers(num1,num2);
	PrintNumbers(num1,num2);
	Swap(num1,num2);
	PrintNumbers(num1, num2);
	}

