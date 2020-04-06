#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		int count = 0;
		vector<int> a;
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			a.push_back(x);
		}

		for (int i = 0; i < n; i++)
			for (int j = 0; j < i; j++)
				if (a[i] >= a[j])
					count++;
		cout << count << endl;

	}
}