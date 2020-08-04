#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int MAX=25+1;
int arr[MAX][MAX];
bool visit[MAX][MAX];
int cnt=0;


int dxy[4][2]={{-1,0},{0,1},{0,-1},{1,0}};


vector<int> v;

void dfs(int N,int x,int y)
{
    for(int i=0;i<4;i++)
    {
        int nx=x+dxy[i][0];
        int ny=y+dxy[i][1];

        if(0<=nx && nx < N && 0<=ny && ny<N)
        {
            if(visit[nx][ny]==false && arr[nx][ny]==1)
            {
                visit[nx][ny]=true;
                cnt++;
                dfs(N,nx,ny);

            }
        }
    }
}

int main()
{
    int N;
    scanf("%d",&N);

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            scanf("%1d",&arr[i][j]);
        }
    }


    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(visit[i][j]==false && arr[i][j]==1)
            {
                visit[i][j]=true;
                cnt++;

                dfs(N,i,j);
                v.push_back(cnt);
                cnt=0;
    
            }
        }
    }

    printf("%d\n",v.size());

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        printf("%d\n",v[i]);
        
    }
}