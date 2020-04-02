#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
    {
        return gcd(b, a%b);
    }
}
int lcm(int a,int b)
{
    return a*b/gcd(a,b);
}
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a;
        cin>>b;

        if(a>b)
        {
            cout<<lcm(a,b)<<endl;
        }
        else
        {
            cout<<lcm(b,a)<<endl;
        }
    }



    return 0;
}