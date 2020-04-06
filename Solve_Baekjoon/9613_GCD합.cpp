#include<iostream>

using namespace std;

int gcd(long long int a,long long int b)
{
    if(a%b==0)
        return b;
    else
    {
        return gcd(b,a%b);
    }

}


int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        long long int arr[101];
        long long int sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];

        for(int j=0;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                long long int g=(arr[j]>arr[k])?gcd(arr[j],arr[k]):gcd(arr[k],arr[j]);
                sum+=g;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}