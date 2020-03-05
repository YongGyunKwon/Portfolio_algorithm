#include<iostream>
using namespace std;

//XYmodM=(X mod M* Y mod M) mod M
//여기서 Y가 홀수인경우 계산후에 X를 한번 더 곱해줘야하고, 이 과정에서 modular 연산을 한번 더 수행해줘야 한다.

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int a,b,c;

    cin>>a>>b>>c;

    long long int result=1;

    for(long long int i=0;i<b;i++)
        result=result*a;

    cout<<result%c<<endl;

    return 0;
}