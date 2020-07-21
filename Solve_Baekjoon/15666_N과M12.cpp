#include<iostream>
#include<algorithm>
using namespace std;

const int MAX=10;
int N,M;
int arr[MAX];
int num[MAX];

void NM(int N,int M,int index)
{
    if(index==M)
    {
        for(int i=0;i<M;i++)
            printf("%d ",arr[i]);
        printf("\n");
        return ;
    }

    int pre=-1;

    for(int i=0;i<N;i++)
    {
        if(pre!=num[i] && arr[index-1]<=num[i])
        {
            arr[index]=num[i];
            pre=num[i];
            NM(N,M,index+1);
        }
    }
}

int main()
{
    scanf("%d %d",&N,&M);

    for(int i=0;i<N;i++)
        scanf("%d",&num[i]);

    sort(num,num+N);
    NM(N,M,0);

}