#include<stdio.h>
int main() {
	int a[1000],n;
	int count = 0;

	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	for (int i = 0; i < n; i++) {
		int c = 1;
		for (int j = 1; j < a[i]; j++)
			if (a[i] % j == 0)
				c++;
		if (c == 2)
			count++;
	}

	printf("%d", count);

}
