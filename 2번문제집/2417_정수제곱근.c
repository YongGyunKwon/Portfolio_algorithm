#include<stdio.h>
#include<math.h>

int main() {

	unsigned long long int n;

	scanf("%lld", &n);
	unsigned long long int a = sqrt(n);
	if (a*a == n)
		printf("%lld", a);
	else
		printf("%lld", a + 1);

}//math 헤더 사용, 맨 아래 숫자부터 천천히!!

 /*
 #include<stdio.h>

 int main() {
 unsigned long long int n;
 unsigned long long int q = 1;

 scanf("%lld", &n);

 for (int i = 0; i < 30; i++) {

 q = (q + (n / q)) / 2;
 }

 printf("%lld", q);
 }
 */ //바빌로니아 법 x = ( x + ( num / x )) / 2

 /*
 #include<stdio.h>

 int main() {
 unsigned long long int n;
 unsigned long long int q = 1;

 scanf("%lld", &n);
 for (q; q*q <= n; q++)
 ;
 printf("%lld", q);
 }

 */ //시간초과

 /*#include<stdio.h>

 int main() {
 unsigned long long int n;
 unsigned long long int q = 1;

 scanf("%lld", &n);

 while(n>=q*q){
 q++;
 }
 printf("%lld", q);

 }
 */ //틀림

 /*
 #include<stdio.h>

 int main() {
 unsigned long long int n;
 unsigned long long int q = 1;

 scanf("%lld", &n);
 while(1){
 if (n <= q*q)
 break;
 else
 q++;
 }
 printf("%lld", q);
 }
 */ //시간초과