#include<stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	int a, b;
	a = n / 100;
	b = n % 10;
	n = n - a * 100 - b;
	n = n + 100 * b + a;


	a = m / 100;
	b = m % 10;
	m = m - a * 100 - b;
	m = m + 100 * b + a;


	if (n > m)
		printf("%d", n);
	else
		printf("%d", m);
}