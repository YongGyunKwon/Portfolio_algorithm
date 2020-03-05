#include<iostream>
#include<string>
#include<vector>

using namespace std;

int check(string a)
{
    int size=a.size();

    for(int i=0;i<size-2;i++)
    {
        if(a[i]!=a[i+1])
        {
            for(int j=i+2;j<size;j++)
            {
                if(a[i]==a[j])
                    return 0;
            }
        }
    }
    return 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int groupword=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        string word;
        cin>>word;
        groupword+=check(word);
    }

    cout<<groupword<<endl;

    return 0;
}