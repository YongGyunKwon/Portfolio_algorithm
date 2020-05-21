#include<iostream>
using namespace std;

//프로그래밍 마술

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    
    int sol;

    cin>>sol;

    int tmp=sol;

    if((sol-2)%3==0)
    {
        tmp-=2;
    }
    else
    {
        tmp-=1;
    }

    tmp=tmp/3;

    cout<<tmp<<endl;

    return 0;   


}