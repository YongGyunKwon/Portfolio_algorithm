#include<iostream>
using namespace std;

int main ()
{
	int a, b, c;

	while(1)
	{
	cin >> a >> b >> c;

	if (!a && !b && !c)
		break;

	if ( (c*c) == (a * a) + (b * b) || (c*c) + (a * a) == (b * b)|| (c*c) + (b * b) == (a * a))
		cout << "right" << endl;
	else
		cout << "wrong" << endl;
	}
}