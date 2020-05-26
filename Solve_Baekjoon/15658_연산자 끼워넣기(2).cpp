#include<iostream>
using namespace std;

int arr[12];
int plu,minu,mult,divi;
int maxi=-1000000001;
int mini=1000000001;

void solve(int index,int p,int m1,int m2,int d,int cal,int N)
{
    if((index-1)==N)
    {
        if(cal<mini)
        {
            mini=cal;
        }
        if(maxi<cal)
        {
            maxi=cal;
        }
        return ;
    }

    if(p<plu)
    {
        solve(index+1,p+1,m1,m2,d,cal+arr[index],N);
    }    
    
    if(m1<minu)
    {
        solve(index+1,p,m1+1,m2,d,cal-arr[index],N);
    }
    
    if(m2<mult)
    {
        solve(index+1,p,m1,m2+1,d,cal*arr[index],N);
    }
    if(d<divi)
    {
        solve(index+1,p,m1,m2,d+1,cal/arr[index],N);
    }

}



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin>>N;


    for(int i=1;i<=N;i++)
    {
        cin>>arr[i];
    }

    cin>>plu>>minu>>mult>>divi;
    
    solve(2,0,0,0,0,arr[1],N);

    cout<<maxi<<endl;
    cout<<mini<<endl;

    return 0;
}