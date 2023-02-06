
#include <iostream>
#include <string>

using namespace std;
string readname() {
	string name;
	cout << "Please Enter Your Name " << endl;
	getline(cin, name);
	return name;
}
void printname(string name) {
	cout << "\n your Name Is : " <<name<< endl;
}
int main()
{
	printname(readname());
}

