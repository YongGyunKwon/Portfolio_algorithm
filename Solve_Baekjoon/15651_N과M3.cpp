#include<iostream>
using namespace std;

const int MAX=7;
int N,M;

int arr[MAX];
bool c[MAX];
void NM(int N,int M,int index)
{
    if(M==index)
    {
        for(int i=0;i<M;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");

        return;
    }

    for(int i=1;i<=N;i++)
    {
        c[i]=true;
        arr[index]=i;
        NM(N,M,index+1);
        c[i]=false;
    }

}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin>>N>>M;
    NM(N,M,0);

    return 0;
}