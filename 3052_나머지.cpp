#include<iostream>
using namespace std;

int main()
{
	int a[42] = {0};
	int count = 0;

	int b;

	for (int i = 0; i < 10; i++)
	{
		cin >> b;
		int x = b % 42;
		a[x]++;
	}

	for (int i=0; i<=41; i++)
	{
		if (a[i] != 0)
			count++;
	}

	cout << count;
}