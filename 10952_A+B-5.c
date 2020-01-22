#include<stdio.h>

int main() {
	int a,b;

	while (scanf("%d %d",&a, &b)) {
		if (a == 0)
			if (b == 0)
				break;
		printf("%d\n", a + b);
	}
	
}