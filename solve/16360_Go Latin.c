#include<stdio.h>

int strlen(char* p) {
	int n = 0;
	while (*p++ != '\0')
		n++;

	return n;
};

int main() {
	int n;
	char words[32];

	scanf("%d\n", &n);

	while (n--) {
		scanf("%s", &words);

		int c = strlen(words);

		if (words[c - 1] == 'a') {
			words[c] = 's';
			words[c + 1] = '\0';
			printf("%s\n", words);
		}

		else if (words[c - 1] == 'i') {
			words[c] = 'o';
			words[c + 1] = 's';
			words[c + 2] = '\0';
			printf("%s\n", words);
		}
		else if (words[c - 1] == 'y') {
			words[c - 1] = 'i';
			words[c] = 'o';
			words[c + 1] = 's';
			words[c + 2] = '\0';
			printf("%s\n", words);

		}
		else if (words[c - 1] == 'l') {
			words[c] = 'e';
			words[c + 1] = 's';
			words[c + 2] = '\0';
			printf("%s\n", words);
		}
		else if (words[c - 1] == 'n') {
			words[c - 1] = 'a';
			words[c] = 'n';
			words[c + 1] = 'e';
			words[c + 2] = 's';
			words[c + 3] = '\0';
			printf("%s\n", words);
		}
		else if (words[c - 2] == 'n' && words[c - 1] == 'e') {
			words[c - 2] = 'a';
			words[c - 1] = 'n';
			words[c] = 'e';
			words[c + 1] = 's';
			words[c + 2] = '\0';

			printf("%s\n", words);
		}
		else if (words[c - 1] == 'o') {
			words[c] = 's';
			words[c + 1] = '\0';
			printf("%s\n", words);
		}
		else if (words[c - 1] == 'r') {
			words[c] = 'e';
			words[c + 1] = 's';
			words[c + 2] = '\0';
			printf("%s\n", words);
		}
		else if (words[c - 1] == 't') {
			words[c] = 'a';
			words[c + 1] = 's';
			words[c + 2] = '\0';
			printf("%s\n", words);
		}
		else if (words[c - 1] == 'u') {
			words[c] = 's';
			words[c + 1] = '\0';
			printf("%s\n", words);
		}
		else if (words[c - 1] == 'v') {
			words[c] = 'e';
			words[c + 1] = 's';
			words[c + 2] = '\0';
			printf("%s\n", words);
		}
		else if (words[c - 1] == 'w') {
			words[c] = 'a';
			words[c + 1] = 's';
			words[c + 2] = '\0';
			printf("%s\n", words);
		}
		else {
			words[c] = 'u';
			words[c + 1] = 's';
			words[c + 2] = '\0';
			printf("%s\n", words);
		}
	}

}