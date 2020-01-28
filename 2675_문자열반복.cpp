#include<iostream>
#include<string>
using namespace std;

int main()
{
	int T;
	cin>>T;

	while (T--)
	{
		string S;
		int R;
		cin >> R;
		cin >> S;
		
		for (int i = 0; i < S.length(); i++)
		{
			for(int j=0;j<R;j++)
			cout << S[i];
		}
		cout << endl;
	}
}