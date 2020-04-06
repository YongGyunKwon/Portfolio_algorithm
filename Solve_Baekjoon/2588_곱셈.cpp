#include<iostream>
using namespace std;

int main()
{
	int x, y;
	
	
	int b[3];

	cin >> x >> y;

	


	b[0] = y / 100;
	b[1] = (y - b[0] * 100) / 10;
	b[2] = (y - (b[0] * 100 + b[1] * 10));
	
	cout << x * b[2] << endl;
	cout << x * b[1] << endl;
	cout << x * b[0] << endl;

	cout << x * b[2] + x * b[1] * 10 + x * b[0] * 100;

}