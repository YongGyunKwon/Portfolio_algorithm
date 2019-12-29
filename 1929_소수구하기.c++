#include <iostream>
#include <cstring>

using namespace std;

int number[1000001];

void era(void)
{

	number[0] = number[1] = -1;

	for (int i = 2; i<1000001; i++)
		number[i] = i;



	for (int i = 2; i * i <= 1000001; i++)
		if (number[i] == i)
			for (int j = i * i; j < 1000001; j += i)
				if (number[j] == j)
					number[j] = i;
}

int main(void)
{

	int m, n;

	cin >> m >> n;

	era();

	for (int i = m; i <= n; i++)

		if (number[i] == i)
			cout << i << "\n";

}
