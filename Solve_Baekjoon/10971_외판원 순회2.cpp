#include<iostream>
using namespace std;

int MIN=987654321;
int W[11][11];
int check[11];
int N;

//result가 다 더한 결과...
//start에서 시작
//y가 [*][]
//sum이 합
//cnt

void solve(int start,int y,int sum,int cnt)
{
    //모두 순회완료
    if(start==y && cnt==N)
    {
        if(MIN>sum)
            MIN=sum;
        return;
    }

    //W[y][* ]
    for(int x=0;x<N;x++)
    {
        if(W[y][x]==0)
            continue;
        if(!check[y] && W[y][x]>0)
        {
            check[y]=true;
            sum+=W[y][x];

            if(sum<=MIN)
            {
            solve(start,x,sum,cnt+1);
            }

            check[y]=false;
            sum-=W[y][x];
        }
        
        
    }

}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    scanf("%d",&N);


    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            scanf("%d",&W[i][j]);
        }
    }

    for(int y=0;y<N;y++)
    {
        solve(y,y,0,0);
    }

    printf("%d",MIN);

    return 0;
}