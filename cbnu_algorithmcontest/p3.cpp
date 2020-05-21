#include<iostream>
using namespace std;



//p3 시계탑
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    int h1,m1,s1;
    int h2,m2,s2;
    int time1;
    int time2;
    int time;
    int count=0;

    cin>>T;
    cin>>h1>>m1>>s1;
    cin>>h2>>m2>>s2;

    time1=(h1*60*60)+(m1*60)+s1;

    for(int i=h1;i<=12;i++)
    {
        count+=i;
    }    


    count=(h2-h1+1)*T;
    
    cout<<count<<endl;



    return 0;
}