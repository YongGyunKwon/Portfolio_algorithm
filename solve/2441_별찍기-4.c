#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		int j;
		for (j = 0; j < i; j++) 
			printf(" ");
			for (int k = j; k <n; k++)
				printf("*");
		
		printf("\n");
	}

}