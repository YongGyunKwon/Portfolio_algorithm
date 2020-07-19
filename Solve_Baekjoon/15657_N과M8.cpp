#include<iostream>
#include<algorithm>
using namespace std;

const int MAX=10;
int N,M;
int arr[MAX];
int num[MAX];

void NM(int N,int M,int index,int cnt)
{
    if(cnt==M)
    {
        for(int i=0;i<M;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
        return ;
    }

    for(int i=index;i<N;i++)
    {
        arr[cnt]=num[i];
        NM(N,M,i,cnt+1);
    }
}

int main()
{
    scanf("%d %d",&N,&M);

    for(int i=0;i<N;i++)
    {
        scanf("%d",&num[i]);
    }

    sort(num,num+N);
    NM(N,M,0,0);
    return 0;
}