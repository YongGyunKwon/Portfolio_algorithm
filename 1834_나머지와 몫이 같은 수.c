#include<stdio.h>
int main() {
	 long long int n;

	scanf("%lld", &n);

	long long int sum = 0;
	long long int b = 0;

	for (int i = 1; i <n; i++) {
		b = n * i + i;
		sum = sum + b;

	}

	printf("%lld\n", sum);
}
