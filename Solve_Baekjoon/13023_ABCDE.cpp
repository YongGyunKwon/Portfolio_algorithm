#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

#define MAX 2000+1

vector<int>arr[MAX];
bool ch[MAX];
bool ans=false;

void dfs(int index,int cnt)
{
    if(cnt==4)
    {
        ans=true;
        return ;
    }

    ch[index]=true;

    for(int i=0;i<arr[index].size();i++)
    {
        int a=arr[index][i];
        if(ch[a]==false)
            dfs(a,cnt+1);
        if(ans==true)
            return;
    }
    ch[index]=false;
}

int main()
{
    int N,M;

    scanf("%d %d",&N,&M);

    for(int i=0;i<M;i++)
    {
        int f1,f2;
        scanf("%d %d",&f1,&f2);
        arr[f1].push_back(f2);
        arr[f2].push_back(f1);
    }

    for(int i=0;i<N;i++)
    {
        memset(ch,false,sizeof(ch));
        dfs(i,0);
        if(ans==true)
            break;
    }
    if(ans==true)
        printf("1\n");
    else
    {
        printf("0\n");
    }

}