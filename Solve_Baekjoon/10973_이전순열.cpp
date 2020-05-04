#include<iostream>
using namespace std;


bool prev_permutation(int *a,int n)
{
    int i=n-1;
    int j=n-1;

    while(a[i-1]<=a[i] && i>0)
    {
        i-=1;
    }
    
    if(i<=0)
        return false;

    while(a[i-1]<=a[j])
    {   
        j-=1;
    }

    swap(a[i-1],a[j]);
    j=n-1;
    
    while(i<j)
    {
        swap(a[i],a[j]);
        i+=1;
        j-=1;
    }

    return true;
    
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int arr[10000];

    cin>>N;

    for(int i=0;i<N;i++)
        cin>>arr[i];

    

    if(prev_permutation(arr,N)==1)
    {
        for(int i=0;i<N;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    


    return 0;
}