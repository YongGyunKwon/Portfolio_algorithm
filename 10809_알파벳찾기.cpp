#include<iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s;
	string abc = "abcdefghijklmnopqrstuvwxyz";
	
	cin >> s;

	for (int i = 0; i < abc.length(); i++) {
		if (s.find(abc[i]) == string::npos)
			cout << -1 << " ";
		else {
			cout << s.find(abc[i]) << " ";
			continue;
		}
	}
}