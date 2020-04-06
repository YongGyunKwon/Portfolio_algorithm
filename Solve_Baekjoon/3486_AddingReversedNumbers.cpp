#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int n;
	cin >> n;
	while(n--)
	{
		string a, b,sum="";
		int sumInt = 0, aInt, bInt;
		cin >> a >> b;
		
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		aInt = stoi(a);
		bInt = stoi(b);

		sumInt = aInt + bInt;
		sum = to_string(sumInt);
		reverse(sum.begin(), sum.end());
		sumInt = stoi(sum);

		cout << sumInt << endl;
	}
}