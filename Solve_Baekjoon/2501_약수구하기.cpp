#include<iostream>
#include<string>
using namespace std;

int measure(int n, int k)
{
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) {
			k--;
			if (k == 0) return i;
		}
	}
	
	return 0;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;

	cin >> n >> k;

	
	cout << measure(n, k)<<endl;


	return 0;
}