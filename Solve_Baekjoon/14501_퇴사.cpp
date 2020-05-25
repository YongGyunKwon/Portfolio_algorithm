#include<iostream>
using namespace std;

int T[16];
int P[16];
int max1=0;

void solve(int index,int sum,int N)
{
    if((N+1)<=index)
    {
        if((N+1)==index)
        {
            //cout<<sum<<endl;
            if(sum>max1)
                max1=sum;
        }
            
        return ;
    }
    
    solve(index+T[index],sum+P[index],N);
    solve(index+1,sum,N);
}


int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;

    cin>>N;
    
    for(int i=1;i<=N;i++)
    {
        cin>>T[i]>>P[i];
    }

    solve(1,0,N);
    
    cout<<max1<<endl;
    return 0;
}