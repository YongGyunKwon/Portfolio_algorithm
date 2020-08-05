    #include<iostream>
    #include<vector>
    #include<queue>

    using namespace std;

    int N,M;
    int mirror[101][101];
    bool check[101][101];
    int v[101][101]={0,};


    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};

    void bfs(int i,int j)
    {
        check[i][j]=true;

        queue<pair<int,int>> q;
        q.push(make_pair(i,j));

        while(!q.empty())
        {
            int x=q.front().second;
            int y=q.front().first;

            q.pop();

            for(int k=0;k<4;k++)
            {
                int nx=x+dx[k];
                int ny=y+dy[k];

                if(0<=nx && nx<=M && 0<=ny && ny<=N)
                {
                    if(mirror[ny][nx]==1 && !check[ny][nx])
                    {
                        mirror[ny][nx]=mirror[y][x]+1;
                        check[ny][nx]=true;
                        q.push(make_pair(ny,nx));
                        //bfs(ny,nx);
                    }
                }
            }

        }
    }


    int main()
    {

        scanf("%d %d",&N,&M);


        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                scanf("%1d",&mirror[i][j]);
            }
        }

        // printf("\n");
        
        bfs(0,0);

        // for(int i=0;i<N;i++)
        // {
        //     for(int j=0;j<M;j++)
        //     {
        //         printf("%1d",mirror[i][j]);
        //     }
        //     printf("\n");
        // }
        
        printf("%d",mirror[N-1][M-1]);
        return 0;
    }
