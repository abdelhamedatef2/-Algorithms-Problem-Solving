#include <iostream>
#include <string>
using namespace std;
struct stPiggyBankContenet{
	int penny;
	int nickel;
	int dime;
	int quarter;
	int dollar;
};
stPiggyBankContenet ReadPiggyBankContenet() {
	stPiggyBankContenet PiggyBankContenet;
	cout << "Please , enter a total pennis\n";
	cin >> PiggyBankContenet.penny;
	cout << "Please , enter a total nickles\n";
	cin >> PiggyBankContenet.nickel;
	cout << "Please , enter a total dimes\n";
	cin >> PiggyBankContenet.dime;
	cout << "Please , enter a total quarter\n";
	cin >> PiggyBankContenet.quarter;
	cout << "Please , enter a total dollar\n";
	cin >> PiggyBankContenet.dollar;
	return PiggyBankContenet;
 }
int CalculateTotalPennis(stPiggyBankContenet PigyyBankContenet) {
	int TotalPenis = 0;
	TotalPenis = PigyyBankContenet.penny + PigyyBankContenet.nickel * 5 + PigyyBankContenet.dime * 10 + PigyyBankContenet.quarter * 25 + PigyyBankContenet.dollar * 100;
		return TotalPenis;
}
int main(){
	float t = CalculateTotalPennis(ReadPiggyBankContenet());
	cout << " Total Pennis is : " << t << endl;
	cout << " Total Dollars is : " << t/100 << endl;

}