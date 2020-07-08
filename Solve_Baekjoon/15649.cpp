#include<iostream>
using namespace std;

const int MAX=8+1;


int arr[MAX];
bool c[MAX];

void NM(int N,int M,int cnt)
{
    if(cnt==M)
    {
        for(int i=0;i<M;i++)
            cout<<arr[i]<<" ";
        cout<<"\n";
        return;
    }

    for(int i=1;i<=N;i++)
    {
        if(!c[i])
        {
            c[i]=true;
            arr[cnt]=i;
            NM(N,M,cnt+1);
            c[i]=false;
        }
    }
}

int main()
{
    int N,M;
    cin>>N>>M;

    NM(N,M,0);
    return 0;
}