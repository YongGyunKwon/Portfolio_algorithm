#include<iostream>
using namespace std;

int main()
{
	int h, m;

	cin >> h >> m;
	
	int sum = 60 * h + m - 45;


	if (sum >= 1440)
	{
		sum -= 1440;
	}
	else if (sum < 0)
	{
		sum += 1440;
	}
	h = sum / 60;
	m = sum - h * 60;

	cout << h <<" "<< m;


}