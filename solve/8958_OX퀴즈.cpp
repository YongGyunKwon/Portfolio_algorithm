#include<iostream>
#include<vector>
#include<time.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;


	for (int i = 0; i < t; i++)
	{

		string s;
		int plus = 1;
		int score = 0;
		cin >> s;
		
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'O')
			{
				score += plus;
				plus++;
			}
			else if (s[i] == 'X')
			{
				plus = 1;
			}
		}

		cout << score<<endl;

	}
		
		return 0;	
}