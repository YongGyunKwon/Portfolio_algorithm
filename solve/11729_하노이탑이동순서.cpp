#include<iostream>

using namespace std;

//hanoi는 재귀적으로 사용
void hanoi(int n,int from,int by,int to)
{

    if(n==1)
        printf("%d %d\n",from,to);
    else
    {
        hanoi(n-1,from,to,by);
        printf("%d %d\n",from,to);
        hanoi(n-1,by,from,to);
    }
}

int hanoinum(int n)
{
    int num=1;
    while(--n)
    {
        num=num*2+1;
    }
    //하노이 원판 규칙은 원판의 크기가 1칸 증가하게 되면 (현재원판)*2+1
    return num;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin>>n;

    printf("%d\n",hanoinum(n));
    hanoi(n,1,2,3);

    return 0;
}