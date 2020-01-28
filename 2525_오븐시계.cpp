#include<iostream>
#include<vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b, c;

	cin >> a >> b;
	cin >> c;

	b += c;

	while (60 <= b)
	{
		a+=1;
		b -= 60;
	}

	if (24<= a)
	{
		a -= 24;
	}

	cout << a << " " << b << endl;

	return 0;
}