#include<iostream>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		
		unsigned long long int number, a;
		
		cin >> number;
		a = 1;
		for (int j = 2; j <= number; j++)
		{
			a = a * j;
			while (a % 10 == 0)
				a = a / 10;
			a = a % 10000000000;
		}
		cout << a%10<<endl;
	}

	return 0;
}