#include<iostream>
#include<queue>

using namespace std;

char map[100][100];
int end_x,end_y;
int dx[4]={0,0,-1,1};
int dy[4]={-1,-1,0,0};

queue<pair<int,int>> start;
queue<pair<int,int>> water;

int bfs()
{
    int cnt=0;
    
    while(!start.empty())
    {
        cnt++;
        int x=water.front().first;
        int y=water.front().second;

        

    }
}


int main()
{
    int R,C;

    scanf("%d %d",&R,&C);

    for(int i=0;i<R;i++)
    {
        scanf("%s",&map[i]);
        
    }

    printf("\n");

    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            printf("%c",map[i][j]);
            if(map[i][j]=='S')
                start.push(make_pair(i,j));
        }
        printf("\n");
    }

}