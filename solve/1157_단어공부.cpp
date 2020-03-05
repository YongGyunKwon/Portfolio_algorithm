#include<iostream>
#include<string>
using namespace std;

int alpha[26] = {0};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string n;
	int max=-1;
	char answer = '?';
	
	cin >> n;

	for (int i = 0; i < n.length(); i++)
	{
		int tmp = n[i] - 'A';
		if (32 <= tmp)
			tmp -= 32;
		
		alpha[tmp]++;
	}
	

	for (int i = 0; i < 26; i++) {
		if (alpha[i] > max) {
			answer = i + 65;
			max = alpha[i];
		}
		else if (alpha[i] == max)
			answer = '?';
	}

	cout << answer << "\n";

	return 0;	
}