#include <iostream>
#include <string>
using namespace std;

int ReadNumber() {
	int num;
	cout << "Please , enter a number\n";
	cin >> num;
	return num;
}
float CalculateHalfNumber(int num){
	return (float)num / 2;
}
void PrintResult(int num) {
	string result = "Half of " + to_string(num) + "is " + to_string(CalculateHalfNumber(num));
	cout <<endl<< result<<endl;
}
int main()
{
	PrintResult(ReadNumber());
}

