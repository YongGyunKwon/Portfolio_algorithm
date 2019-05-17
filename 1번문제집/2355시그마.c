#include<stdio.h>

int main() {
	long long int a, b;
	long long int s1, s2;

	scanf("%lld %lld", &a, &b);

	if (a >b) {
		long long int tmp = a;
		a = b;
		b = tmp;
	}

	s1 = ((a - 1)*a) / 2;
	s2 = (b*(b + 1)) / 2;

	printf("%lld", s2 - s1);

}