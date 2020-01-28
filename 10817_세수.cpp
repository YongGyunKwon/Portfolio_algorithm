#include<iostream>
using namespace std;

int main()
{
	int a[3];

	for (int i = 0; i < 3; i++)
		cin >> a[i];

	for(int i=0;i<3;i++)
		for(int j=i;j<3;j++)
			if (a[i] < a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}

	cout << a[1];
}