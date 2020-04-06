#include<stdio.h>
int main() {
	int n;

	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		while (1) {
			if (n%i == 0) {
				printf("%d\n", i);
				n = n / i;
			}
			
			else
				break;
		}
	}
}
