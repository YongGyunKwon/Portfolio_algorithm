#include<stdio.h>

int main() {
	int num;
	int count = 0;

	scanf("%d", &num);
	int n = num;


	while (1) {
		int a = n / 10;
		int b = n % 10;
		int c = (a + b) % 10;

		n = 10 * b + c;
		count++;

		if (n == num)
			break;
	}
	printf("%d", count);

	return 0;

}
