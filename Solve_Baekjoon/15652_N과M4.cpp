#include<iostream>
using namespace std;

int N,M;
const int MAX=8;

bool c[MAX];
int arr[MAX];

void NM(int N,int M,int start,int index)
{
    if(index==M)
    {
        for(int i=0;i<M;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");

        return;
    }

    for(int i=start;i<=N;i++)
    {
        //if(c[i])
            //continue;

        //c[i]=true;
        arr[index]=i;
        NM(N,M,i,index+1);
        //c[i]=false;
    }
}

int main()
{
    scanf("%d %d",&N,&M);
    NM(N,M,1,0);
}