#include<stdio.h>

int main() {
	while (1)
	{
		int num;
		int sum=0;
		int a[10000];
		int k = 0;

		scanf("%d",&num);

		if (num == -1)
			return 0;
		
		int i = 1;

		while(i<num){
			if (num%i == 0) {
				sum += i;
				a[k] = i;
				k++;
				
			}
			i++;
		}
		if (sum == num) {
			printf("%d =", num);
			for (int j = 0; j < k-1; j++)
				printf(" %d +",a[j]);
			printf(" %d\n", a[k - 1]);
		}
		else
			printf("%d is NOT perfect.\n",num);
	}
}
