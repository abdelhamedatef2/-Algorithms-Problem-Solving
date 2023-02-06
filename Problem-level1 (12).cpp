#include <iostream>
#include <string>
using namespace std;
void ReadMarks(int &num1, int &num2 ) {
	cout << "Please , enter first number \n";
	cin >> num1;
	cout << "Please , enter second number \n";
	cin >> num2;
}
int MaxOf2Numbers(int num1,int num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}
void PrintResult(int max) {
	cout << "Max of two numbers is : " << max<<endl;
}
int main()
{
	int num1,num2;
	ReadMarks(num1,num2);
	PrintResult(MaxOf2Numbers(num1,num2));
	}

