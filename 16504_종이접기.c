#include<stdio.h>

int main() {
	int n;

	scanf("%d", &n);

	long long sum = 0;
	int a;

	for (int i = 0; i < n; i++)
		for (int j = 0; j<n; j++) {
			scanf("%d", &a);
			sum = sum + a;
		}
	printf("%lld", sum);

}
