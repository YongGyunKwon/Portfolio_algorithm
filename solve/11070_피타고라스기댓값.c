#include<stdio.h>

int main()
{
	int T;

	scanf("%d", &T);

	while (T--)
	{
		int n, m;


		long long x[1001] = { 0 };
		long long y[1001] = { 0 };
		long long w[1001] = { 0 };

		long long min, max;

		scanf("%d %d", &n, &m);
		

		for (int i = 1; i <= m; i++)
		{
			int  a, b, p, q;

			scanf("%d %d %d %d", &a, &b, &p, &q);
			

			x[a] += p;
			x[b] += q;

			y[a] += q;
			y[b] += p;

		}


		for (int i = 1; i <= n; i++)
		{
			if (x[i] == 0 && y[i] == 0)
				w[i] = 0;
			else {

				w[i] = x[i] * x[i] * 1000 / (x[i] * x[i] + y[i] * y[i]);
			}
			if (i == 1)
			{
				min = w[i];
				max = w[i];
				continue;
			}

			if (max < w[i])
				max = w[i];

			if (min > w[i])
				min = w[i];

		}
		printf("%lld\n%lld\n", max, min);
		

	}
}