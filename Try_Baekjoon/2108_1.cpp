#include<iostream>
using namespace std;

int arr[8001];


int average(double total,int N)
{
    total/=N;
    if(total>0)
        total+=0.5;
    else
    {
        total-=0.5;
    }
    return((int)total);
}   


int mid(int N)
{
    int number=(N+1)/2;
    int arr2[8001];
    fill_n(arr2,8001,0);

    for(int i=0;i<8001;i++)
        arr2[i]=arr[i];

    for(int j=0;j<8001;j++)
    {
        while(arr2[j]>0)
        {
            arr2[j]--;
            number--;
            if(number==0)
            {
                return (j-4000);
                break;
            }
        }
    }
}


int mod()
{
    int freq=0;
    for(int i=0;i<8001;i++)
    {
        if(arr[i]>arr[freq])
            freq=i;
    }

    for(int i=freq+1; i<8001; i++)
    {   
        if(arr[i]==arr[freq])
        {
            freq=i;
            break;
        }
    }

    return(freq-4000);
}


int range(int MAX,int MIN)
{
    return MAX-MIN;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    fill_n(arr,8001,0);

    int N;
    cin>>N;

    double total=0;
    int MAX=-4001;
    int MIN=4001;


    for(int i=0;i<N;i++)
    {
        int tmp;

        cin>>tmp;
        total+=tmp;
        arr[tmp+4000];
        if(tmp>MAX)
            MAX=tmp;
        if(tmp<MIN)
            MIN=tmp;
    }

    cout<<average(total,N)<<endl;
    cout<<mid(N)<<endl;
    cout<<mod()<<endl;
    cout<<range(MAX,MIN)<<endl;
    return 0;
}