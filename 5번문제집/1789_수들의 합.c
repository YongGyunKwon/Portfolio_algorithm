#include<stdio.h>
int main() {
	unsigned long long int s;
	int n = 0;
	unsigned long long int sum = 0;
	scanf("%lld", &s);

	for (unsigned long long int i = 1; sum <= s; i++) {
		if (sum + i <= s) {
			sum = sum + i;
			n++;
		}
		else {
			printf("%d", n);
			break;
		}
	}

}
