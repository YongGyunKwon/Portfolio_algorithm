#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int sum=0;
int out[15];



void solve(int n,int k,int inp[],int out[],int cnt)
{
    if(cnt==k)
    {
        for(int i=0;i<k;i++)
        {
            cout<<out[i]<<" ";
        }
        cout<<endl;
        return ;
    }

    for(int i=0;i<n;i++)
    {
        out[cnt]=inp[i];
        solve(n,k,inp,out,cnt+1);
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    int N,K;
    int number=0;
    
    int arr[15];
    cin>>N>>K;
    
    for(int i=0;i<N;i++)
    {
        scanf("%1d",&arr[i]);
    }
    
    if(K==0)
    {
        for(int i=0;i<N;i++)
            printf("%d",arr[i]);
    }    
    else
    {
        
        solve(N,K,arr,out,0);

            

    }
    
    return 0;
}