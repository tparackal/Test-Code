#include <iostream>
#include <string>
using namespace std;

string numType(int a); // function declaration

int main()
{
	int num;
	cout << "Enter a number: \n";
	cin >> num;
	string type = numType(num);
	cout << "The number is " << type << "\n";
	return 0;
}

string numType (int a)
{
	string result = "none";
	if(a < 0)
	{
		result = "negative";
	}
	if(a > 0)
	{
		result = "positive";
	}
	if(a == 0)
	{
		result = "zero";
	}
	return result;
}