#include <iostream>

using namespace std;



const int MAX = 1000 + 1;



int N, K;

bool minFactor[MAX]; //minFactor[i] -> i의 가장 작은 소인수(i가 소수인 경우 자기 자신)



//에라토스테네스의 체

int eratosthenes(int cnt)

{

	for (int i = 2; i <= N; i++)

		minFactor[i] = true;



	//에라토스테네스의 체 수행

	for (int i = 2; i * i <= MAX * MAX; i++)

	{

		if (minFactor[i])

		{

			minFactor[i] = false;

			cnt--;

			if (cnt == 0)

				return i;



			for (int j = i * i; j <= N; j += i)

				if (minFactor[j])

				{

					minFactor[j] = false;

					cnt--;

					if (cnt == 0)

						return j;

				}

		}

	}

}



int main(void)

{

	cin >> N >> K;



	cout << eratosthenes(K) << endl;

	return 0;

}

