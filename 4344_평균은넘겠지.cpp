#include<iostream>
#include<vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int c;
	cin >> c;


	for (int i = 0; i < c; i++)
	{
		int n;
		int total = 0;
		int count = 0;
		double average = 0;
		double result;

		vector<int> score;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			score.push_back(tmp);
			total += tmp;
		}
		average = (double)total / n;

		for (int i = 0; i < n; i++)
		{
			if (average<score[i])
					count++;
		}
		
		
		result = ((double)count / n)*100;
		
		cout.precision(3);
		
		cout << fixed<<result<<"%"<<endl;


	}
		
		return 0;	
}