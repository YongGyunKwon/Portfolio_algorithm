#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		int x;
		cin >> x;
		if (x < 40)
			sum += 40;
		else
			sum += x;
	}

	int av = sum / 5;
		cout << av;

}