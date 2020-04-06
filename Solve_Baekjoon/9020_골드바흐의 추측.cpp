#include<iostream>
using namespace std;

const int MAX=10000+1;

int notprime[MAX];

void era()
{
    notprime[0]=1;
    notprime[1]=1;

    for(int i=2;i<MAX;i++)
    {
        if(!notprime[i])
            for(int j=i*i;j<MAX;j+=i)
                notprime[j]=1;
    }
}

void gold(int n)
{
	int i, j, mid = n/2;
	for (i = j = mid; i <= n; i--, j++)
		if (!notprime[i] && !notprime[j]) {
			cout<<i<<" "<<j<<endl;
            return;
		}
}

int main()
{

    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;

    era();

    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        gold(n);
    }

    return 0;
}