#include<stdio.h>

int main() {
	int a[5];
	int b[5];
	int count = 0;

	for (int i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < 5; i++)
		scanf("%d", &b[i]);

	for (int i = 0; i < 5; i++)
		if (a[i] == b[i]) {
			printf("N");
			break;
		}
		else
			count++;
		
	if(count ==5)
		printf("Y");
}