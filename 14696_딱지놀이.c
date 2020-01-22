#include<stdio.h>

int main() {
	int n;
	int f;

	

	scanf("%d", &n);

	int m, k;

	for (int i = 0; i < n; i++) {
		int a[5] = { 0 };
		int b[5] = { 0 };


		scanf("%d", &m);
		for (int j = 0; j < m; j++) {
			scanf("%d", &f);
			a[f]++;
		}

		scanf("%d", &k);
		for (int j = 0; j < k; j++) {
			scanf("%d", &f);
			b[f]++;
		}

		int winner = 0;

		for (int shape = 4; shape >= 1; shape--) {
			if (a[shape] != b[shape]) {
				if (a[shape] > b[shape]) {
					winner = 1;
					printf("A\n");
					break;
				}
				else if (a[shape] < b[shape]) {
					winner = 1;
					printf("B\n");
					break;
				}
			}
		}
		if (winner == 0)
				printf("D\n");
	}
}