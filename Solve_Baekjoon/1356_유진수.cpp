#include<iostream>
#include<vector>
using namespace std;

vector<int> a;

int main()
{
	int n;

	cin >> n;

	while (n > 0)
	{
		a.push_back(n % 10);
		n /= 10;
	}

	
	int size = a.size();

	

	int check = 0;

	if (size > 1)
	{
		for (int i = 0; i < size; i++)
		{

			int b = 1;
			int c = 1;

			for (int j = 0; j <= i; j++)
				b *= a[j];
			for (int k = i + 1; k < size; k++)
				c *= a[k];
			if (b == c) 
			{
				check =1;
				break;
			}
		}
	}
	if (check)
		cout << "YES"<<endl;
	else
		cout << "NO"<<endl;
}