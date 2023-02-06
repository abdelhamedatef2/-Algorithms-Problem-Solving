#include <iostream>
#include <string>
using namespace std;
void ReadRadius(float &r) {
	cout << "Enter radius" << endl;
	cin >> r;
}
float CalculatCircleArea(float r) {
	const float pi=3.14;
	return r * r * pi;
}
void PrintResult(float result) {
	cout << "Area of circle is :" << result << endl;
}
int main(){
	float r;
	ReadRadius(r);
	PrintResult(CalculatCircleArea(r));
}