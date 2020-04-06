#include<iostream>
using namespace std;

int main()
{
	int count[10] = { 0 };

	int a, b, c,n;

	cin >> a >> b >> c;

	n = a * b * c;

	while (n > 0)
	{
		int x = n % 10;

		count[x]++;

		n /= 10;

	}

	for (int i = 0; i < 10; i++)
		cout << count[i]<<endl;

}