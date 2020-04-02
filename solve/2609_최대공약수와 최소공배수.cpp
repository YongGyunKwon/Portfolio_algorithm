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

    int a,b;
    cin>>a;
    cin>>b;

    if(a>b)
    {
        cout<<gcd(a,b)<<endl;
        cout<<lcm(a,b)<<endl;
    }
    else
    {
        cout<<gcd(b,a)<<endl;
        cout<<lcm(b,a)<<endl;
    }
    



    return 0;
}