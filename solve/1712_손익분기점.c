#include<stdio.h>

int main() {

	unsigned long long int a, b, c;

	scanf("%lld %lld %lld", &a, &b, &c);



	if (c > b)
		printf("%d", a / (c - b) + 1);
	else
		printf("-1");


}