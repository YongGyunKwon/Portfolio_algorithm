#include<iostream>
using namespace std;

long long int fac(int n)
{
    if(n==1 || n==0)
        return 1;
    else
    {
        return n*fac(n-1);
    }
    
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;

    cin>>n>>k;

    //이항계수 공식
    long long int result=fac(n)/(fac(k)*fac(n-k));

    cout<<result%10007<<endl;
    
    return 0;
}