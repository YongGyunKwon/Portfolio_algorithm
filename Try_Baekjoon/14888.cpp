#include<iostream>
#include<vector>
using namespace std;


void operator(vector<int> &a, int index,int cur,int plus,int minus,int mul,int div)
{
    int n=a.size();

    if(index==n)
    {
        return;
    }


}

    
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    

    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];    
    }

    int plus, minus, mul, div;

    cin>>plus>>minus>>mul>>div;



    return 0;
}