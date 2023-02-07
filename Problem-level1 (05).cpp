#include <iostream>
#include <string>
using namespace std;

struct stInfo {
	int age;
	bool HasDriverLicense;
	bool HasRecommendation;
};
stInfo ReadInfo() {
	stInfo Info;
	cout << "Please , enter your age\n";
	cin >> Info.age;
	cout << "\nDo you have a driver licence? \n[type (1) for Yes and (0) for No]\n\n";
	cin >> Info.HasDriverLicense;
	cout << "\nDo you have a Recommendation? \n[type (1) for Yes and (0) for No]\n\n";
	cin >> Info.HasRecommendation;
	return Info;
}
bool IsAccepted(stInfo Info) {
	if (Info.HasRecommendation == true)
		return true;
	else
	return (Info.age > 21 && Info.HasDriverLicense == true);
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

