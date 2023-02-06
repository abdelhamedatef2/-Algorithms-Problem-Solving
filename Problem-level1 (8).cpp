#include <iostream>
#include <string>
using namespace std;
enum enPassFail{pass=1 , fail=2};
int ReadMark() {
	int mark;
	cout << "Please , enter your mark \n";
	cin >> mark;
	return mark;
}
enPassFail CheckMark(int Mark){
	if (Mark >= 50)
		return enPassFail::pass;
	else
		return enPassFail::fail;
}
void PrintResult(int mark) {
	if (CheckMark(mark) == enPassFail::pass)
		cout << "PASS";
	else
		cout << "FAIL";
}
int main()
{
	PrintResult(ReadMark());
}

