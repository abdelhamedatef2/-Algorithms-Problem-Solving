#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(float &a, float &b){
	cout << "Please , enter first A \n";
	cin >> a;
	cout << "Please , enter second B \n";
	cin >> b;
}
float CalculateRectangleArea(float a, float b) {
	return a * b;
}
void PrintResult(float result) {
	cout << "\n\nRectangle area is : " << result <<endl;
}
int main()
{
	float a, b;
	ReadNumbers(a, b);
	PrintResult(CalculateRectangleArea(a, b));
}