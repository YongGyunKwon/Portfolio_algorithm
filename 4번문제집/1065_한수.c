#include<stdio.h>

int main() {

	int n;
	int a, b, c;
	scanf("%d", &n);

	int count = 99;

	if (n < 100)
		printf("%d", n);
	else {

		for (int i = 100; i <= n; i++) {
			a = i / 100;
			b = (i / 10) % 10;
			c = i % 10;

			if ((a - b) == (b - c))
				count++;
		}
		printf("%d", count);
	}

}