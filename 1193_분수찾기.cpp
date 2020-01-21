#include<iostream>
using namespace std;

int main()
{
    int x;

    int n=1;    //몇번째 줄

    int c=0; //분자
    int d=0; //문모

    cin>>x;

    while(n<x)
    {
        x=x-n;
        n++;
    }

    if(n%2==0)
    {
        for(int i=n;i>0;i--)
        {
            d=i;
            c++;

            x--;
            if(x==0)
                break;

        }


    }
    else
    {
        for(int i=n;i>0;i--)
        {
            c=i;
            d++;

            x--;
            if(x==0)
                break;
        }


    }

    cout<<c<<"/"<<d<<endl;

    return 0;
}

/*
x    n  c/d

1    1  1/1
3    2  1/2 2/1
6    3  3/1 2/2 1/3
10   4  1/4 2/3 3/2 4/1
15   5  5/1 4/2 3/3 2/2 1/5
.
.
.


*/