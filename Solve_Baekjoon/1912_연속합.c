#include<stdio.h>
int main() {
	int a[100000] = { NULL };
	int b[100000] = { NULL };

	int max;
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);

	for (int i = 1; i <= n; i++) {
		if (b[i - 1] + a[i] > a[i])
			b[i] = b[i - 1] + a[i];
		else {
			b[i] = a[i];
		}
	}

	max = b[1];

	for (int i = 1; i <= n; i++)
		if (max < b[i])
			max = b[i];

	prinitf("%d", max);
}
//������ ���� ���ѰͰ� ������ ���� ���� ���� �ִ��϶���, ������ ���� ������ �ʰ� ������ ������ �ִ��϶�