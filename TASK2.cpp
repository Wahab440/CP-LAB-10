#include<iostream>
using namespace std;
int main()
{
	string str;
	int l = 0;
	cout << "Enter your string: ";
	cin >> str;
	for (int i = 0; str[i] != '\0'; i++)
	{
		l++;
	}
	cout << "\n\nThe length of Characters in a string is " << l;
	cout << endl;
	return 0;
}