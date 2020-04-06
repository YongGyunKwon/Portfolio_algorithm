#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	unsigned long long int n;
	unsigned long long int result = 1;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		result *= i;
		result %= 10000000000;
		while (result % 10 == 0)
			result /= 10;
	}

	cout << result%10 << endl;

		return 0;
}