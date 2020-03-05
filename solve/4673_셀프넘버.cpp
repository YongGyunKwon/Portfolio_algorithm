#include<iostream>
#include<cstdio>
#define N 10001
using namespace std;

#define N 10001
bool arr[N];

int self(int n)
{
	int selfa = n;
	int i = 10;
	int tmp = n;

	while (tmp != 0)
	{
		selfa += tmp % 10;
		tmp /= 10;
	}
	
	return selfa;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	
	for (int i = 1; i < N; i++)
	{
		int t = self(i);

		if (t <= N)
			arr[t] = true;

	}


	for (int i = 1; i < N; i++)
		if (!arr[i])
			cout << i << endl;
	
	return 0;	
}