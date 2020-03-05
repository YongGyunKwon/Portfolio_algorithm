#include<stdio.h>

int main() {
	int n, l;
	scanf("%d %d", &n, &l);

	int t;
	int x = -1;
	int iter = -1;

	for (int i = l; i <= 100; i++) {
		t = (i - 1)*i / 2;
		if ((n - t) % i == 0 && (n - t) / i >= 0) {
			x = (n - t) / i;
			iter = i;
			break;
		}
	}

	if (x == -1)
		printf("-1");
	else
		for (int i = 0; i < iter; i++)
			printf("%d ", x + i);

}