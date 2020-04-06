#include<iostream>
#include<cstring>

using namespace std;
int n;
int a[10001];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int x;

	cin >> n;

	memset(a, 0, sizeof(a));

	while (n--)
	{
		cin >> x;
		a[x]++;
	}
	
	for(int i=1;i<=10000;i++)
		if (a[i] > 0)
		{
			for (int j = 0; j < a[i]; j++)
				cout << i << '\n';
		}
}