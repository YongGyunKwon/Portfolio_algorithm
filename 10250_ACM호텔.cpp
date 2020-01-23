#include<iostream>
using namespace std;

int main()
{
    int t;
    int w,h,n;

    cin>>t;

    while(t!=0)
    {
        int yy=1;
        int xx=1;

        cin>>h>>w>>n;

        yy=n%h;
        xx=n/h+1;

        if(yy==0)
        {
            yy=h;
        }

        if(!(n%h))
            xx-=1;

        cout<<yy*100+xx<<endl;
        t--;
    }

    return 0;

}