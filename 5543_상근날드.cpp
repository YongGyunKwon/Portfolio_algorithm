#include<iostream>
using namespace std;

int main()
{
	int a[5];
	int b[3];
	int min = 2000;

	for (int i = 0; i < 5; i++)
		cin >> a[i];

	for (int i = 0; i < 3; i++)
	{
		int x = a[i] + a[3]-50;
		int y = a[i] + a[4]-50;

		if (x > y)
			b[i] = y;
		else
			b[i] = x;

		if (min > b[i])
			min = b[i];
	}
	cout << min;
	
}