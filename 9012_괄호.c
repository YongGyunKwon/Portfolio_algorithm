#include<stdio.h>
#include<string.h>



int check(char *a) {
	int ch = 0;

	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == '(')
			ch++;
		else if (a[i] == ')')
			ch--;

		if (ch < 0)

			return -1;

	}
	return ch;
}


int main() {

	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) 
	{	
		char a[50];
		scanf("%s", a);
		if (check(a) == 0)
			printf("YES\n");
		else
			printf("NO\n");
		
	}

}