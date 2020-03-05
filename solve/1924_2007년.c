#include<stdio.h>

int main() {
	int x, y;
	int total = 0;
	scanf("%d %d", &x, &y);

	int day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	for (int i = 1; i < x; i++)
		total += day[i - 1];
	total += y;

	switch(total % 7) 
	{
		case 0: printf("SUN"); break;
		case 1: printf("MON"); break;
		case 2: printf("TUE"); break;
		case 3: printf("WED"); break;
		case 4: printf("THU"); break;
		case 5: printf("FRI"); break;
		case 6: printf("SAT"); break;
	}
}