#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i=0;
    int day=0;
    int a,b,v;
    
    cin>>a>>b>>v;

    day=(v-b-1)/(a-b)+1;
    
    cout<<day<<endl;

    return 0;
}

/* 처음에 아래 방법을 이용했지만 실패


    while(i<v)
    {
        i+=a;
        if(i<v)
            i-=b;
        else
            break;
        day++;
    }
*/