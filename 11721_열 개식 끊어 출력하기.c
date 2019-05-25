#include <stdio.h>

int main() {

	char word[101];

	scanf("%s", word);

	for (int i = 0; i<100; i++) {

		if (word[i] == '\0')
			break;
		printf("%c", word[i]);

		if (i % 10 == 9) printf("\n");
		
	}
	return 0;
}
