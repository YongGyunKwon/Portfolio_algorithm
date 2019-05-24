#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int max = 0;
	int money = 0;
	int dice[1000][3] = {0};
	

	for (int i = 0; i < n; i++)
		for(int j=0;j<3;j++)
			scanf("%d", &dice[i][j]);
	
	for(int i=0;i<n;i++)
		for (int j = 0; j < 2; j++)
			for(int k=1;k<3;k++)
			{
			if (dice[i][j] <dice[i][k]) {
				int tmp = dice[i][k];
				dice[i][k] = dice[i][j];
				dice[i][j] = tmp;
			}
		}
	

	for (int i = 0; i < n; i++) {
		if (dice[i][0] == dice[i][1])
			if (dice[i][1] == dice[i][2])
				money = 10000 + dice[i][0] * 1000;
			else
				money = 1000 + dice[i][0] * 100;
		else
			money = 100*dice[i][0];
		if (money > max)
			max = money;
		
	}

	printf("%d", max);
}
