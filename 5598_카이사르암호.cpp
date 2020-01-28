#include<iostream>
#include<string>
using namespace std;

int main()
{
	string c;

	cin >> c;

	
	for (int i = 0; i <c.length(); i++)
	{
		int x;
		if (c[i] >= 68)
			x = c[i] - 3;
		
		else
			x = c[i] + 23;
		cout << (char)x;
	}
}