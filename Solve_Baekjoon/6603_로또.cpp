#include<iostream>
#include<vector>
using namespace std;

vector<int> arr;

void lotto(vector<int> &a,int index,int cnt)
{
    if(cnt==6)
    {
        for(int i=0;i<6;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return ;
    }

    int n=a.size();
    if(n==index)
       return;
    
    arr.push_back(a[index]);
    lotto(a,index+1,cnt+1);
    arr.pop_back();
    lotto(a,index+1,cnt);

    return;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    int k;
    int s[13];

    while(1)
    {
        cin>>k;
        if(k==0)
        {
            break;
        }
        
        vector<int> S(k);

        for(int i=0;i<k;i++)
        {
            cin>>S[i];
        }
        

        lotto(S,0,0);
        cout<<"\n";
    }
    
    return 0;
}