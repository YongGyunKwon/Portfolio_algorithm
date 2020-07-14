#include<iostream>
#include<algorithm>
using namespace std;

const int MAX= 10;
int N,M;
int arr[MAX];
int c[MAX];
int num[MAX];

void NM(int N,int M,int index,int start)
{
    if(index==M)
    {
        for(int i=0;i<M;i++)
        {
            printf("%d ",num[i]);
        }
        printf("\n");
        return ;
    }

    for(int i=start;i<N;i++)
    {
        if(c[i])
             continue;

        c[i]=true;
        arr[index]=num[i];
        NM(N,M,index+1,i);
        c[i]=false;
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
    
    for(int i=0;i<N;i++)
        printf("%d",num[i]);
    
    printf("\n");
    
    NM(N,M,0,0);


    return 0;
}