#include<iostream>
#include<queue>
#include<vector>

using namespace std;

const int MAX=1001;

int map[MAX][MAX];
int cmap[MAX][MAX][2];

int dty[4]={1,-1,0,0};
int dtx[4]={0,0,1,-1};

int bfs(int N,int M)
{
    queue<pair<pair<int,int>,int>> q;
    q.push(make_pair(make_pair(0,0),1));
    cmap[0][0][1]=1;

    while(!q.empty())
    {
        int y=q.front().first.first;
        int x=q.front().first.second;
        int block=q.front().second;

        q.pop();

        if(y==N-1 && x==M-1)
        {
            return cmap[y][x][block];
        }


        for(int i=0;i<4;i++)
        {
            int dx=x+dtx[i];
            int dy=y+dty[i];

            if(0<=dx&& dx<M && 0<=dy && dy<N)
            {
                if(map[dy][dx]==1 && block)
                {
                    cmap[dy][dx][block-1]=cmap[y][x][block]+1;
                    q.push(make_pair(make_pair(dy,dx),block-1));
                }
                else if(map[dy][dx]==0 && cmap[dy][dx][block]==0)
                {
                    cmap[dy][dx][block]=cmap[y][x][block]+1;
                    q.push(make_pair(make_pair(dy,dx),block));
                }

            }

        }

    }
    return -1;
}


int main()
{
    int N,M;

    scanf("%d %d",&N,&M);
    
    for(int i=0;i<N;i++)
    {
        string tmp;
        cin>>tmp;

        for(int j=0;j<M;j++)
        {
            map[i][j]=tmp[j]-'0';
        }
    }
    printf("%d\n",bfs(N,M));
}