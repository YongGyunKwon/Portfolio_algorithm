#include<iostream>
using namespace std;

int divsum(int n)
{


    int sum=0;
    int copy;

    for(int i=1;i<n;i++)
    {
        sum=i;
        copy=i;

        while(copy)
        {
            sum+=copy%10;
            copy/=10;
        }


        if(n==sum)
        {
            return i;

        }

    }

    return 0;

}


int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin>>n;

    cout<<divsum(n)<<endl;

    return 0;


}