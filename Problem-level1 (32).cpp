#include <iostream>
#include <string>
using namespace std;
int ReadNumber() {
	int num = 0;
	cout << "Please enter number\n";
	cin >> num;
	return num;
}
int ReadPow() {
	int m = 0;
	cout << "Please enter Power\n";
	cin >> m;
	return m;
}
int PowerOfM(int num,int m) {
	if (m == 0)
		return 1;
	else
	{
		int p = 1;
		for (int i = 1; i <= m; i++) {
			p = p * num;
		}
		return p;
	}

}
int main(){
	cout<<PowerOfM(ReadNumber(), ReadPow());
}