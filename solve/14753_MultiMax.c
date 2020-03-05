#include<stdio.h>

int main()
{
	int n;
	int a[10000];
	int c1, c2,c3,c4;
	int ca1, ca2;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);



	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}


	c1= a[0] * a[1] * a[2];
	c2 = a[0] * a[n - 1] * a[n - 2];
	c3= a[0] * a[1];
	c4 = a[n - 1] * a[n - 2];

	
	if (c1 > c2)
		ca1 = c1;
	else
		ca1 = c2;

	if (c3 > c4)
		ca2 = c3;
	else
		ca2 = c4;


	if (ca1 > ca2)
		printf("%d", ca1);
	else
		printf("%d", ca2);
}