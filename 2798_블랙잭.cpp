#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int card[100];

    int n,m;
    int result= 0;

    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
            cin>>card[i];
    }

    for(int j=0;j<n-2;j++)
    {
        for(int k=j+1;k<n-1;k++)
        {

            for(int z=k+1;z<n;z++)
                if(card[j]+card[k]+card[z]<=m && m-(card[j]+card[k]+card[z])<m-result)
                    result=card[j]+card[k]+card[z];
       }

    }


    cout<<result<<endl;

    return 0;
}