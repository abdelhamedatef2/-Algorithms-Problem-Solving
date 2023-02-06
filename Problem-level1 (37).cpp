#include <iostream>
#include <string>
using namespace std;
float ReadNumber(string massege) {
	float num = 0;
	cout << massege;
	cin >> num;
	return num;
}
float CalculateUntil() {
	int sum = 0 , i=1, num=0;
	do {
		num = ReadNumber("plaese enter number " + to_string(i)+ "\n");
		if (num == -99){
			break;
	}
		sum = sum + num;
		i++;
	} while (num != -99);
	{
		return sum;
	}
}
int main(){
	cout << CalculateUntil();
}