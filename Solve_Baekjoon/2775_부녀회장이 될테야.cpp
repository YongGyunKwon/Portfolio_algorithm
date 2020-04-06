#include<iostream>

using namespace std;

int a[15][15]={0};

void makeroom()
{
    for(int i=1;i<=14;i++)
            a[0][i]=i;

        for(int i=1;i<=14;i++)
        {
            int tmp=0;
                for(int j=1;j<=14;j++)
                {
                    tmp+=a[i-1][j];
                    a[i][j]=tmp;
                }
        }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    makeroom();

    int t;
    cin>>t;
    while(t--){
        int k,n;

        cin>>k>>n;

        cout<<a[k][n]<<endl;
    }
    return 0;
}