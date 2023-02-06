#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(float &a, float &h){
	cout << "Please , enter first A \n";
	cin >> a;
	cout << "Please , enter second h \n";
	cin >> h;
}
float CalculateTriangleArea(float a, float h) {
	return (a/2)*h;
}
void PrintResult(float result) {
	cout << "\n\n Triangle area is : " << result <<endl;
}
int main()
{
	float a, h;
	ReadNumbers(a, h);
	PrintResult(CalculateTriangleArea(a,h));
}