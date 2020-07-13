#include<iostream>
using namespace std;

int N,M;
const int MAX= 10;

int arr[10];
bool c[10];

void NM(int N,int M,int start,int index)
{
    if(index==M)
    {
        for(int i=0;i<M;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return ;
    }

    for(int i=start;i<=N;i++)
    {
        if(c[i])
        {
            continue;
        }

        c[i]=true;
        arr[index]=i;
        NM(N,M,i+1,index+1);
        c[i]=false;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>N>>M;

    NM(N,M,1,0);

}