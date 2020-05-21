#include<iostream>
#include<algorithm>

using namespace std;

//P2 교통비 절약 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c,d;

    cin>>a>>b>>c>>d;

    int tmp[3]={0};
    int day=d;
    int day2=d;
    
    tmp[0]=a*d;
    
    
    while(0<=day)
    {
        tmp[1]=tmp[1]+c;
        day-=b;

        if(day<b)
            tmp[2]=tmp[1]+a*day;

    }

    if(day>0)
        tmp[1]=tmp[1]+day*a;
    
    
    sort(tmp,tmp+3);
    cout<<tmp[0]<<endl;

    //cout<<tmp[0]<<endl;   
    //cout<<tmp[1]<<endl;
    //cout<<tmp[2]<<endl;
    return 0;
}