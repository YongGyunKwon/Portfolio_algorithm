#include<iostream>
#include<vector>
using namespace std;

int main()
{
	
	int n;
	cin >> n;
	
	while (n<=1000000000)
	{
		vector<int>a;

		int x= n;
		while (x != 0)
		{
			a.push_back(x % 10);
			x /= 10;
		}
		
		int div = 0;
		for (int i = 0; i < a.size(); i++)
		{
			div += a[i];
		}
		if (n%div == 0)
			break;
		else
			n++;
	}
	cout << n;
}