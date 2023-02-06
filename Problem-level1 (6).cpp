#include <iostream>
#include <string>
using namespace std;

struct stInfo {
	string FirstName;
	string LastName;
};
stInfo ReadInfo() {
	stInfo Info;
	cout << "Please , enter your first name\n";
	cin >> Info.FirstName;
	cout << "Please , enter your last name\n";
	cin >> Info.LastName;
	return Info;
}
string GetFullName(stInfo Info , bool Reversed) {
	string FullName;
	if (Reversed)
		return FullName = Info.FirstName + " " + Info.LastName;
	else
		return FullName = Info.LastName + " " + Info.FirstName;
}
void PrintFullName(string FullName) {
	cout << "\nyour name is : \n" << FullName << ".\n\n";
}
int main()
{
	PrintFullName(GetFullName(ReadInfo(),false));
}

