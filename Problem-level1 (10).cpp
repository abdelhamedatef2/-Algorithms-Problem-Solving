#include <iostream>
#include <string>
using namespace std;
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
void PrintResult(int total) {
	cout << "Average of the marks is : " << total;
}
int main()
{
	int mark1, mark2, mark3;
	ReadMarks(mark1, mark2, mark3);
	PrintResult(AverageOf3Marks(mark1, mark2, mark3));
	}

