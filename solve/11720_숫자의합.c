#include <stdio.h>

int main() {
	int n;
	int sum = 0;
	char input[100];

	scanf("%d", &n);
	scanf("%s", input);

	for (int i = 0; i < n; i++)
		sum += (input[i] - '0');

	printf("%d", sum);

}	