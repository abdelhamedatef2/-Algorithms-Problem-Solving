#include <iostream>
#include <string>
using namespace std;
void ReadMarks(int &num1, int &num2 ,int &num3) {
	cout << "Please , enter first number \n";
	cin >> num1;
	cout << "Please , enter second number \n";
	cin >> num2;
	cout << "Please , enter third number \n";
	cin >> num3;
}
int MaxOf3Numbers(int num1,int num2,int num3) {
	if (num1 > num2 && num1 > num3)
		return num1;
	else if (num2 > num1 && num2 > num3)
		return num2;
	else
		return num3;
}
void PrintResult(int max) {
	cout << "Max of three numbers is : " << max<<endl;
}
int main()
{
	int num1,num2,num3;
	ReadMarks(num1,num2,num3);
	PrintResult(MaxOf3Numbers(num1,num2,num3));
	}

