#include<iostream>
#include<string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string number;
	int sixornine;

	cin >> number;

	int arr[10] = { 0 };
	
	int set = 1;


	for (int i = 0; i < number.length(); i++)
	{
		arr[number[i] - '0']++;
		
	}

	for (int j = 0; j < 10; j++)
	{
		if (j != 6 && j != 9)
		{
			if (set <= arr[j])
				set = arr[j];
		}
	}

	sixornine = arr[6] + arr[9];

	if (set >= sixornine)
		cout << set << endl;
	else
	{
		if ((set * 2) > sixornine)
			cout << set << endl;
		else if ((set * 2) <= sixornine)
			cout << (sixornine+1)/2<<endl;

	}

	return 0;
}