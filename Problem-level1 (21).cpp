#include <iostream>
#include <string>
using namespace std;
float ReadDiameter() {
	float l;
	cout << "Enter L \n";
	cin >> l;
	return l;
}
float CalculateCircleAreaAlongTheCircumference(float l) {
	const float pi = 3.14;
	return (l*l)/(4*pi);
}
void PrintResult(float area) {
	cout << "ARea of circle is : " << area << endl;
}
int main(){
	PrintResult(CalculateCircleAreaAlongTheCircumference(ReadDiameter()));
}