#include <iostream>
#include <string>
using namespace std;
int ReadNumbers() {
	int n;
	cout << "Please , Enter N \n";
	cin >> n;
	return n;
}
void PrintNumbers(int n) {
	for (int i = 1; i <= n; i++)
		cout << i << endl;
}
int main(){
	PrintNumbers(ReadNumbers());
}