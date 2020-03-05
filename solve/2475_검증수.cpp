#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;
	int x;

	cin >> a >> b >> c >> d >> e;

	x = (a * a + b * b + c * c + d * d + e * e)%10;

	cout << x;
}