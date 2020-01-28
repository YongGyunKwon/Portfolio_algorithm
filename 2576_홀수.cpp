#include<iostream>
using namespace std;

int main()
{
	
	int a[7];
	int sum = 0;
	int min = 100;
	for (int i = 0; i < 7; i++)
	{
		cin >> a[i];

		if (a[i]%2 ==1)
		{
			sum += a[i];
			if (min > a[i])
				min = a[i];
		}
	}
	if (sum == 0)
		cout << -1;
	else
	{
		cout << sum << endl;
		cout << min << endl;
	}
}