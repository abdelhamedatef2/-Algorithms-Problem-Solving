#include <iostream>
#include <string>
using namespace std;
int ReadNumber() {
	int num = 0;
	cout << "Please enter number\n";
	cin >> num;
	return num;
}
void PowerOf2_3_4(int num) {
	cout << num * num << endl;
	cout << num * num * num << endl;
	cout << num * num * num * num << endl;
}
int main(){
	PowerOf2_3_4(ReadNumber());
}