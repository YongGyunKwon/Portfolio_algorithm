#include<iostream>
#include<algorithm>
using namespace std;

const int MAX=10;
bool c[MAX];
int arr[MAX];
int num[MAX];

int N,M;

void NM(int N,int M,int index)
{
    if(M==index)
    {
        for(int i=0;i<M;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");

        return ;
    }

    for(int i=0;i<N;i++)
    {
        arr[index]=num[i];
        NM(N,M,index+1);
    }
}

int main()
{
    scanf("%d %d", &N,&M);

    for(int i=0;i<N;i++)
        scanf("%d",&num[i]);

    sort(num,num+N);

    // for(int i=0;i<N;i++)
    //     printf("%d ",num[i]);
    // printf("\n");
    
    NM(N,M,0);

    return 0;
}