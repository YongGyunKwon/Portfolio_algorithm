#include<iostream>
#include<vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int array[8];
	int check = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> array[i];

	}
	
	for (int i = 1; i <= 7; i++)
	{
		int tmp = array[i] - array[i-1];
		if (tmp == 1)
			check =check + 1;
		else if (tmp == -1)
			check =check - 1;
		
	}

	if (check == 7)
		cout << "ascending" << endl;
	else if (check == -7)
		cout << "descending" << endl;
	else
		cout << "mixed" << endl;
		
	return 0;	
}