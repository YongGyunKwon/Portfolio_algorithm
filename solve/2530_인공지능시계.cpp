#include<iostream>
#include<vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b, c, d;

	cin >> a >> b>>c;
	cin >> d;

	c += d;

	while (60 <= c)
	{
		b+=1;
		c -= 60;
	}

	while (60 <= b)
	{
		a += 1;
		b -= 60;
	}

	while(24<= a)
	{
		a -= 24;
	}

	cout << a << " " << b <<" " << c <<endl;

	return 0;
}