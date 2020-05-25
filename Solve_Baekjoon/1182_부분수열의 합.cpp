#include<iostream>
using namespace std;

int arr[21];
int count=0;


//i is index

void dfs(int i,int sum,int N,int S)
{
    if(i==N)
        return;
    
    if( sum+arr[i] ==S)
    {
        count++;
        
    }
 
       
    
    dfs(i+1,sum,N,S);
    dfs(i+1,sum+arr[i],N,S);
    
    
}


int main()
{
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N,S;

    cin>>N>>S;

    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    
    dfs(0,0,N,S);

    cout<<count<<endl;


    return 0;

}