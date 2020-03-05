#include<iostream>
using namespace std;

int x,y;
//최대공약수를 구하기 위해 재귀 사용
int gcd(int x,int y)
{
    if(x%y==0)
        return  y;
    else
    {
        return gcd(y,x%y);
    }

}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>x>>y;
    
    int g=x>y?gcd(x,y):gcd(y,x);

    cout<<g<<endl; //최대공약수
    cout<<x*y/g<<endl; //최소공배수 x*y/(최대공약수) 가 최소공배수 

    return 0;
}