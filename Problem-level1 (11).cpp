#include <iostream>
#include <string>
using namespace std;
enum enPassFail{pass=1 , fail=2};
void ReadMarks(int &mark1, int &mark2 , int &mark3) {
	cout << "Please , enter first mark \n";
	cin >> mark1;
	cout << "Please , enter second mark \n";
	cin >> mark2;
	cout << "Please , enter third mark\n";
	cin >> mark3;
}
int AverageOf3Marks(int mark1,int mark2,int mark3) {
	return (float)(mark1+mark2+mark3)/3;
}
enPassFail CheckAverage(int average) {
	if (average >= 50)
		return enPassFail::pass;
	else
		return enPassFail::fail;
}
void PrintResult(int average) {
	cout << "Average of the marks is : " << average<<endl;
	if (CheckAverage(average) == enPassFail::pass)
		cout << "PASS\n";
	else
		cout << "FAIL\n";
}
int main()
{
	int mark1, mark2, mark3;
	ReadMarks(mark1, mark2, mark3);
	PrintResult(AverageOf3Marks(mark1, mark2, mark3));
	}

