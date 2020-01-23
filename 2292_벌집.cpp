#include<iostream>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int i=1;
    int room=1;
    int plus=6;
    int now=1;

    cin>>n;

    while(1)
    {
        if(n<=i)
            break;
        room++;
        i+=plus;
        plus+=6;
    }

    cout<<room<<endl;

    return 0;
}