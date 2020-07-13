#include<iostream>
#include<algorithm>
using namespace std;

int N,M;
const int MAX=8;

int val[MAX];
int arr[MAX];
int c[MAX];

void NM(int N,int M,int index)
{
    if(M==index)
    {
        for(int i=0;i<M;i++)
            printf("%d ",arr[i]);

        printf("\n");
        return;

    }

    for(int i=0;i<N;i++)
    {
        if(c[i])
            continue;

        c[i]=true;
        arr[index]=val[i];
        NM(N,M,index+1);
        c[i]=false;

    }
}

int main()
{
    scanf("%d %d",&N,&M);

    for(int i=0;i<N;i++)
    {
        scanf("%d",&val[i]);
    }

    sort(val,val+N);
    NM(N,M,0);
    // for(int i=0;i<N;i++)
    //     printf("%d ",val[i]);



    return 0;
}