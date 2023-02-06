#include <iostream>
#include <string>
using namespace std;
float ReadDiameter() {
	float d;
	cout << "Enter diameter \n";
	cin >> d;
	return d;
}
float CalculateCircleAreaByDiameter(float d) {
	const float pi = 3.14;
	return (pi*d*d)/4;
}
void PrintResult(float area) {
	cout << "ARea of circle is : " << area << endl;
}
int main(){
	PrintResult(CalculateCircleAreaByDiameter(ReadDiameter()));
}