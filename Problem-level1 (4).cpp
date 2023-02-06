#include <iostream>
#include <string>
using namespace std;

struct stInfo {
	int age;
	bool HasDriverLicense;
};
stInfo ReadInfo() {
	stInfo Info;
	cout << "Please , enter your age\n";
	cin >> Info.age;
	cout << "Do you have a driver licence? \n[type (1) for Yes and (0) for No]\n\n";
	cin >> Info.HasDriverLicense;
	return Info;
}
bool IsAccepted(stInfo Info) { 
	if (Info.age > 21 && Info.HasDriverLicense == true) 
	return 1;
}
void PrintResult(stInfo Info) {
	if(IsAccepted(Info))
		cout << "\n HIRED , Congratulation \n";
	else
		cout <<" \n Rejected , Sorry and keep trying \n";
}
int main()
{
	PrintResult(ReadInfo());
}

