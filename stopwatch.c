#include <time.h> 
#include <stdio.h> 
int main()
{
	clock_t st, et; //시간측정프로그램
	st = clock();//함수 수행 전에 시간을 구함(단위 msec) 
	
	//문제 쓰는자리
	
	
	
	//문제 끝	

	et = clock();//함수 수행 후에 시간을 구함(단위 msec) 
	printf("걸린 시간: %d msec", et - st);// 두 시간의 차이를 계산하여 출력 
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