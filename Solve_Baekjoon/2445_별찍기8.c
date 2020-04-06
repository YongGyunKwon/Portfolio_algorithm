#include<stdio.h>

int main() {



	int n, i, j, k;



	scanf("%d", &n);

	for (i = 1; i <= n; i++) {

		for (j = 1; j <= i; j++)
			printf("*");

		for (k = (n * 2) - (i * 2); k >= 1; k--)
			printf(" ");

		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");

	}
	   
	for (i = n - 1; i >= 1; i--) {
			   
		for (j = i; j >= 1; j--)
			printf("*");



		for (k = 0; k < 2 * (n - i); k++)
			printf(" ");

		for (j = i; j >= 1; j--)
			printf("*");
		printf("\n");

	}



}