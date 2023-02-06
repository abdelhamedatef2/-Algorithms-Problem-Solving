#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(float &a, float &d){
	cout << "Please , enter first A \n";
	cin >> a;
	cout << "Please , enter second B \n";
	cin >> d;
}
float CalculateRectangleAreaBySideAndDiagonal(float a, float d) {
	return a*sqrt(pow(d,2)-pow(a,2));
}
void PrintResult(float result) {
	cout << "\n\nRectangle area is : " << result <<endl;
}
int main()
{
	float a, d;
	ReadNumbers(a, d);
	PrintResult(CalculateRectangleAreaBySideAndDiagonal(a,d));
}