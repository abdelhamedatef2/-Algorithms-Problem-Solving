#include <iostream>
#include <string>
using namespace std;
void ReadDiameter(float &a, float &b) {
	cout << "Enter a \n";
	cin >> a;
	cout << "Enter b \n";
	cin >> b;
}
float CalculateCircleAreaInscribedInAnIsoscelesTriangle(float a,float b) {
	const float pi = 3.14;
	return (((2*a)-b)/((2*a)+b))*((b*b)/4)*pi;
}
void PrintResult(float area) {
	cout << "ARea of circle is : " << area << endl;
}
int main(){
	float a, b;
	ReadDiameter(a,b);
	PrintResult(CalculateCircleAreaInscribedInAnIsoscelesTriangle(a,b));
}