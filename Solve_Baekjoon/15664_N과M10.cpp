#include<iostream>
#include<algorithm>
using namespace std;

const int MAX=10;
int N,M;
int num[MAX];
int arr[MAX];
bool c[MAX];

void NM(int N,int M,int index)
{
    if(M==index)
    {
        for(int i=0;i<M;i++)
            printf("%d ",arr[i]);

        printf("\n");
        return;
    }

    int pre=-1;

    for(int i=index;i<N;i++)
    {
        if(!c[i] && pre!=num[i] && arr[index-1]<=num[i])
        {

            c[i]=true;
            arr[index]=num[i];
            pre=num[i];
            NM(N,M,index+1);
            c[i]=false;
            
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