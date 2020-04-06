#include<stdio.h>

int main() {

	int n;
	long long x;
	int input;

	scanf("%d %lld", &n,&x);

	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		if (input < x)
			printf("%d ", input);
	}
}