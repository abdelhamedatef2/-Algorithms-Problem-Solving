#include <iostream>
#include <string>
using namespace std;
float ReadDiameter() {
	float a;
	cout << "Enter A \n";
	cin >> a;
	return a;
}
float CalculateCircleAreaInscribedInASquare(float a) {
	const float pi = 3.14;
	return (pi*a*a)/4;
}
void PrintResult(float area) {
	cout << "ARea of circle is : " << area << endl;
}
int main(){
	PrintResult(CalculateCircleAreaInscribedInASquare(ReadDiameter()));
}