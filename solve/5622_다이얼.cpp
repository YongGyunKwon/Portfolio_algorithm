#include<iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int time = 0;
	string s;

	cin >> s;
	
	for (int i = 0; i < s.length(); i++)
	{
		

		if ('A' <= s[i]&&s[i] <= 'C')
			time+=3;
		else if ('D' <= s[i] && s[i] <= 'F')
			time += 4;
		else if ('G' <= s[i] && s[i] <= 'I')
			time += 5;
		else if ('J' <= s[i] && s[i] <= 'L')
			time += 6;
		else if ('M' <= s[i] && s[i] <= 'O')
			time += 7;
		else if ('P' <= s[i] && s[i] <= 'S')
			time += 8;
		else if ('T' <= s[i] && s[i] <= 'V')
			time += 9;
		else if ('W' <= s[i] && s[i] <= 'Z')
			time += 10;

		
	}
	cout << time << endl;

	return 0;
}