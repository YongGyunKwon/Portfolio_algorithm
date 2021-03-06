#include<iostream>

using namespace std;

//재귀로 풀게 되면 시간이 걸린다.
int fibo(int n)
{
    int a[3]={0,1,1};

    for(int i=2;i<n;i++)
        a[(i+1)%3]=a[i%3]+a[(i-1)%3];

    return a[n%3];
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    cout<<fibo(n)<<endl;

    return 0;
}