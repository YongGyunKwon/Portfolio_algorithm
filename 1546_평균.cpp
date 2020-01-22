#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	double m = 0;
	double sum = 0;
	vector<double> x;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		double a;
		cin >> a;
		x.push_back(a);
		if (m < a)
			m=a;
	}

	for (int i = 0; i < n; i++)
	{
		x[i] = x[i] / m * 100;
		sum += x[i];
	}

	cout << sum / n;

}