#include<iostream>
#include<string>

using namespace std;
int main() 
{
	string a;
	cin >> a;
	
	int n=a.length();
	int count = 0;

	for (int i = 0; i < n / 2; i++)
	{
			if (a[i] == a[n -1- i])
				count++;
	}

	
	if (count == n / 2)
		cout << "1";
	else
		cout << "0";
	
	
}