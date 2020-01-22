#include<stdio.h>
int main() {
	int n;
	int a[10000];
	int b[10000];
	

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 1; j <= a[i]; j++) {
			if (a[i] % j == 0)
				count++;
		}
		b[i] = count;
	}
		
	for(int i=0;i<n;i++)
		printf("%d %d\n", a[i], b[i]);
}