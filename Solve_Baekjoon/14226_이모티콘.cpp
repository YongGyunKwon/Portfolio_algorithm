#include<iostream>
#include<queue>
#include<tuple>
#include<cstring>

using namespace std;

int dist[1001][1001];


void bfs(int S)
{

    queue<pair<int,int>> q;
    q.push(make_pair(1,0));
    dist[1][0]=0;

    while(!q.empty())
    {
        int s,c;//s 화면 이모티콘, c는 클립보드
        tie(s,c)=q.front();
        //printf("s %d c %d\n",s,c);
        q.pop();

        //모두 복사
        if(dist[s][s]==-1)
        {
            q.push(make_pair(s,s));
            dist[s][s]=dist[s][c]+1;
        }
        //클립보드꺼 붙여넣기
        if(s+c<=S && dist[s+c][c]==-1)
        {
            q.push(make_pair(s+c,c));
            dist[s+c][c]=dist[s][c]+1;
        }

        //하나빼기
        if(s-1>=0 && dist[s-1][c]==-1)
        {
            q.push(make_pair(s-1,c));
            dist[s-1][c]=dist[s][c]+1;
        }

    }



}

int main()
{
    int S;
    scanf("%d",&S);

    memset(dist,-1,sizeof(dist));

    bfs(S);

    int ans=-1;
    
    for(int i=0;i<=S;i++)
    {
        if(dist[S][i]!=-1)
        {
            if(ans==-1 || ans>dist[S][i])
            {
                ans=dist[S][i];
            }
        }
    }

    printf("%d\n",ans);

}