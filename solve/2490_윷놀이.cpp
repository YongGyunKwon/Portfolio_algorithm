#include<iostream>
using namespace std;

int main()
{
	int a[4];
	int t = 3;
	while(t--)
	{
		int count = 0;
		cin >> a[0] >> a[1] >> a[2] >> a[3];
		
		for (int j = 0; j < 4; j++){
			if (a[j] == 1)
					count++;
		}
		if (count == 4)
			cout << "E"<<endl;
		else if (count == 3)
			cout << "A"<<endl;
		else if (count == 2)
			cout << "B"<<endl;
		else if (count == 1)
			cout << "C"<<endl;
		else if (count == 0)
			cout << "D"<<endl;
	}
}