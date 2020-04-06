#include <iostream>
using namespace std;

const int MAX = 123456 * 2 + 1;
int minFactor[MAX]; 

void eratosthenes(void)
{
	minFactor[0] = minFactor[1] = -1;

	for (int i = 2; i < MAX; i++)
		minFactor[i] = i;

	for (int i = 2; i*i < MAX; i++)
		if (minFactor[i] == i)
			for (int j = i * i; j < MAX; j += i)
				if (minFactor[j] == j)
					minFactor[j] = i;
}
int main(void)
{
	eratosthenes();

	while (1)
	{
		int num;

		cin >> num;

		if (num == 0)
				break;

		int count = 0;

		for (int i = num + 1; i <= 2 * num; i++)
			if (minFactor[i] == i)
				count++;

		cout << count << "\n";
	}

	return 0;

}