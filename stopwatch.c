#include <time.h> 
#include <stdio.h> 
int main()
{
	clock_t st, et; //�ð��������α׷�
	st = clock();//�Լ� ���� ���� �ð��� ����(���� msec) 
	
	//���� �����ڸ�
	
	
	
	//���� ��	

	et = clock();//�Լ� ���� �Ŀ� �ð��� ����(���� msec) 
	printf("�ɸ� �ð�: %d msec", et - st);// �� �ð��� ���̸� ����Ͽ� ��� 
	return 0;
}

/*
#include<stdio.h>
#include<time.h>
int main() {
	int a,b,i,sum=0;	
	scanf("%d %d",&a,&b);
	i = a;
	while (i != b + 1)
	{
		sum += i;
		++i;
	}
	printf("%d",sum);
	return 0;
}
*/