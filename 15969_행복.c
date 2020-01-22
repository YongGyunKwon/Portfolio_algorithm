#include<stdio.h>

int main() {
	int a;
	int n[1000];
	int min;
	int max;
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		int b;
		scanf("%d", &b);
		n[i] = b;
	}
	min = n[0];
	max = n[0];

	for (int i = 0; i < a; i++) {
		

		if (min > n[i])
			min = n[i];
		if (max < n[i])
			max = n[i];
	}
	printf("%d", max - min);
}