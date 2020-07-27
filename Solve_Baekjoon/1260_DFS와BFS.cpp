#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

#define MAX 1000+1

int N,M,V;
vector<int>arr[MAX];

bool ch[MAX];

void dfs(int x)
{
    printf("%d ",x);
    ch[x]=true;

    for(int i=0;i<arr[x].size();i++)
    {
        int next=arr[x][i];
        //printf("next is %d ",next);
        if(!ch[next])
            dfs(next);
    }
}

void bfs(int x)
{
    queue<int> q;

    q.push(x);
    ch[x]=true;

    while(!q.empty())
    {
        int n = q.front();
        q.pop();
        ch[n]=true;
        printf("%d ",n);
        //printf("size %d ",arr[n].size());
        for(int j=0;j<arr[n].size();j++)
        {
            int ind=arr[n][j];
            if(!ch[ind])
            {
                q.push(ind);
                ch[ind]=true;
            }
        }
    }
}


int main()
{
    scanf("%d %d %d",&N,&M,&V);

    for(int i=0;i<M;i++)
    {
        int tmp1,tmp2;
        scanf("%d %d",&tmp1,&tmp2);
        arr[tmp1].push_back(tmp2);
        arr[tmp2].push_back(tmp1);
    
        sort(arr[tmp1].begin(),arr[tmp1].end());
        sort(arr[tmp2].begin(),arr[tmp2].end());
        
    }

    dfs(V);
    printf("\n");

    memset(ch,false,sizeof(ch));

    bfs(V);

    return 0;

}