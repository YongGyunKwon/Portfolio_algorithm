#include<iostream>
using namespace std;

int main() {
	int a[101][101] = {};
	int h, w, n, l, d, x, y;
 
	scanf("%d %d", &h, &w);
    scanf("%d",&n);
    
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y);
		int max;

		if (d == 0) 
            max = w - y + 1;
		else 
            max = h - x + 1;
		for (int j = 1; j <= l; j++) 
        {
			if (d == 0) 
                a[x][y++] = 1;
			else 
                a[x++][y] = 1;
			if (j == max) 
                break;
		}
	}


	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
	}
}