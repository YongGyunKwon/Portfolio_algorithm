#include<iostream>
#include<string>

using namespace std;

int main()
{
	string n = {};
	int num = 0;

	getline(cin, n);

	for (int i = 0; i < n.length(); i++)
	{
		if (n.at(i) == ' ')
			num++;
	}
	if (n.at(0) == ' ')
		num--;
	if (n.at(n.length() - 1) == ' ')
		num--;

	cout << num + 1;
}