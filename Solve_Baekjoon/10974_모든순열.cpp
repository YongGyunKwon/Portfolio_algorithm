#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main()
{
    int N;
    cin >>N;
    vector<int>a(N);

    for(int i=0;i<N;i++)
    {
        a[i]=i+1;
    }
    do
    {
        for(int i=0;i<N;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        
    } while (next_permutation(a.begin(),a.end()));
    
}