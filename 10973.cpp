#include<iostream>
using namespace std;

int prev_permutation(int *a,int n)
{
    int i=n-1;

    while(i>0 && a[i-1]<=a[i])
    {
        i-=1;
    }
    if(i<=0)
        return -1;

    while(a[j]>=a[i-1])
    {
        
    }

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

    

    return 0;
}