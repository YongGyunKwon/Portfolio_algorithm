#include<iostream>
using namespace std;

int main()
{
	int n;

	cin >> n;
	
	while (n % 2 == 0)
		n /= 2;
	
	
	if (n == 1)
		cout << 1;
	else
		cout << 0;
	
}