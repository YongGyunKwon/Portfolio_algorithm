#include<iostream>
using namespace std;

int main()
{
	int x, y, w, h;
	int arr[4];

	cin >> x >> y >> w >> h;

	arr[0] = x;
	arr[1] = w - x;
	arr[2] = y;
	arr[3] = h - y;

	int min = arr[0];
	for (int i = 0; i <= 3; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}

	cout << min;
}