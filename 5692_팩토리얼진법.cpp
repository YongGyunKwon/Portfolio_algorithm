#include<iostream>
#include<string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int factorial[6] = {0,1,2,6,24,120};

	while (1)
	{
		string n;
		int length, change = 0;
		cin >> n;
		if (n == "0")
			break;
		
		length = n.length();

		for (int i = 0; i <length; i++)
		{
			change +=  (n[i]-'0')* factorial[length-i];
		}
		cout << change << '\n';
	}

	
	return 0;
}