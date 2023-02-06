#include <iostream>
#include <string>
using namespace std;
enum enPrimeNotPrime{prime=1,notprime=2};
int ReadPositiveNumbers(string massege) {
	float num = 0;
	
	do
	{
		cout << massege;
		cin >> num;
	} while (num<=0);
	return num;
}
enPrimeNotPrime CheckPrime(int num) {
	int m = num/2;
	for (int i = 2; i <= m; i++)
	{
		if (num % i == 0)
			return enPrimeNotPrime::notprime;
	}
	return enPrimeNotPrime::prime;
}
void PrintNumberType(int num) {
	switch (CheckPrime(num))
	{
	case prime:
		cout << "\n Prime \n";
		break;
	case notprime:
		cout << "\n Not Prime \n";
		break;
	}
}
int main(){
	PrintNumberType(ReadPositiveNumbers("Please enter a positive number\n"));
}