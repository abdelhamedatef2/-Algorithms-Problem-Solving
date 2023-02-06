#include <iostream>
#include <string>
using namespace std;
enum enOperationType{add='+',subtract='-',multiply='*',divide='/' };
float ReadNumber(string message) {
	float num = 0;
	cout << message;
	cin >> num;
	return num;
}
enOperationType ReadOperationType(string message) {
	char Ot;
	cout << message;
	cin >> Ot;
	return	(enOperationType)Ot;
}
float Calculate(int num1, int num2, enOperationType Ot) {
	switch (Ot)
	{
	case add:
		return num1 + num2;
	case subtract:
		return num1 - num2;
	case multiply:
		return num1 * num2;
	case divide:
		return num1 / num2;
	default:
		cout << " ERROR \n ";
	}
}
	 
int main(){
	float num1 = ReadNumber("Plaese enter num 1 \n");
	float num2 = ReadNumber("Plaese enter num 2 \n");
	enOperationType ot = ReadOperationType("Please Enter operation type + , -  * , / \n");
	cout<<Calculate(num1, num2, ot);
}