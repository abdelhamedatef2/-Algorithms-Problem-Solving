#include <iostream>
#include <string>
using namespace std;
void ReadDiameter(float &a, float &b , float &c) {
	cout << "Enter a \n";
	cin >> a;
	cout << "Enter b \n";
	cin >> b;
	cout << "Enter c \n";
	cin >> c;
}
float CalculateCircleAreaInscribedInAnIsoscelesTriangle(float a,float b , float c) {
	const float pi = 3.14;
	float p = (a + b + c) / 2;
	float t = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
	return  t * t*pi;
}
void PrintResult(float area) {
	cout << "ARea of circle is : " << area << endl;
}
int main(){
	float a, b , c;
	ReadDiameter(a,b,c);
	PrintResult(CalculateCircleAreaInscribedInAnIsoscelesTriangle(a,b,c));
}