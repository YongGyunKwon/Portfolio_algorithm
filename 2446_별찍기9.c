#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);


	for (int i = 1; i <= n; i++) {

		for (int k = 2; k <= i; k++) {
			printf(" ");
		}

		for (int j = (n * 2 + 1) - (i * 2); j >= 1; j--) {

			printf("*");

		}
		printf("\n");
	}

	for (int i = 1; i <= n- 1; i++) {

		for (int k = n - 2; k >= i; k--) {

			printf(" ");

		}

		for (int j = 1 + (i * 2); j >= 1; j--) {

			printf("*");
		}
		printf("\n");

	}

}