#include<iostream>
#include<cstring>
using namespace std;

const int MAX= 50+1;

int map[MAX][MAX];
bool check[MAX][MAX];

int dw[8]={1,0,-1,0,1,1,-1,-1};
int dh[8]={0,1,0,-1,-1,1,-1,1};

int W,H;

void dfs(int w,int h)
{
    check[h][w]=true;

    for(int i=0;i<8;i++)
    {
        int nw=w+dw[i];
        int nh=h+dh[i];

        if(0<=nw && nw<=W && 0<=nh && nh<=H)
        {
            if(check[nh][nw]==false && map[nh][nw]==1)
            {
                check[nh][nw]=true;
                dfs(nw,nh);
            }
        }
    }
}


int main()
{

    
    while(1)
    {

        int isl=0;

        scanf("%d %d",&W,&H);

        if(W==0 && H==0)
            break;

        memset(map,0,sizeof(map));
        memset(check,false,sizeof(check));


        for(int i=0;i<H;i++)
        {
            for(int j=0;j<W;j++)
            {
                scanf("%1d",&map[i][j]);
            }
        }

        for(int i=0;i<H;i++)
        {
            for(int j=0;j<W;j++)
            {
                if(!check[i][j]&& map[i][j])
                {
                    isl++;
                    dfs(j,i);
                }
            }
        }
        printf("%d\n",isl);
        isl=0;
        
    }

}