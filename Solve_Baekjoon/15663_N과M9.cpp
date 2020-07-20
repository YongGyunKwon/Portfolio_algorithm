#include<iostream>
#include<algorithm>

using namespace std;

int N,M;
const int MAX=10;
int num[MAX];
int arr[MAX];
bool ch[MAX];

void NM(int N,int M,int index)
{
    if(index==M)
    {
        for(int i=0;i<M;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
        return ;
    }
    
    int pre=-1;

    for(int i=0;i<N;i++)
    {
        if(!ch[i] && pre!=num[i])
        {

            ch[i]=true;
            arr[index]=num[i];
            pre=num[i];
            NM(N,M,index+1);
            ch[i]=false;
        }
    }
}

int main()
{
    scanf("%d %d",&N,&M);

    for(int i=0;i<N;i++)
        scanf("%d",&num[i]);

    sort(num,num+N);

    // for(int j=0;j<N;j++)
    //     printf("%d",num[j]);
    
    // printf("\n");

    NM(N,M,0);
    return 0;
}