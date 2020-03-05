#include<iostream>
using namespace std;

//666이 연속으로 들어가는 n번쨰로 가장 작은 수를 구하라

int makesix(int n)
{
    int i=665;
    int count = 0;

    while(++i)
    {
        unsigned long long int copy=i;
        int check =0;

        while(copy)
        {
            if(copy%1000==666)
                check=1;

            copy/=10;
        }

        if(check==1)
        {
            count++;
            if(count==n)
                return i;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int result;

    cin>>n;

    cout<<makesix(n)<<endl;

    return 0;

}