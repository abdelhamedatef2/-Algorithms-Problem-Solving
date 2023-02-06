#include <iostream>
#include <string>
using namespace std;
int ReadTotalSales () {
	float totalsales = 0;
		cout << "Please enter total sales\n";
		cin >> totalsales;
		return totalsales;
}

float CalculateComissionPercentage(float totalsales){
	if (totalsales >= 1000000)
		return .01;
	else if (totalsales >= 500000)
		return .02;
	else if (totalsales >= 100000)
		return .03;
	else if (totalsales >= 50000)
		return .04;
	else
		return 0;
}
float CalculateTotalComission(float totalsales) {
	return CalculateComissionPercentage(totalsales) * totalsales;
}
int main(){
	float t = ReadTotalSales();
	cout << "Comession percentage is " << CalculateComissionPercentage(t) << endl;
	cout <<"Total comession is "<< CalculateTotalComission(t) << endl;
}