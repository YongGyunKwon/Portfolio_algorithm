#include<iostream>
using namespace std;

int MIN=987654321;
int check[10]={0,};


int solve(int *check,int now_i,int now_j,int to,int N,int count,int result)
{
    if(count==N)
    {
        if(MIN>result)
            return result;
    }

    check[now_i]=1;

    

    

}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int W[10][10];

    scanf("%d",&N);


    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            scanf("%d",&W[i][j]);
        }
    }
       
    printf("%d\n",MIN);

    return 0;
}