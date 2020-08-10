#include<iostream>
#include<queue>
#include<vector>
using namespace std;

const int MAX=100000+1;
int arr[MAX]={0,};


int bfs(int N,int K)
{
    int time=0;
    queue<int> q;
    q.push(N);

    while(!q.empty())
    {
        int size=q.size();

        for(int i=0;i<size;i++)
        {
            int n=q.front();
            q.pop();

            if(n==K)
                return time;

            if(n>0 && arr[n-1]==0)
            {
                q.push(n-1);
                arr[n-1]=1;
            }

            if(n<MAX && arr[n+1]==0)
            {
                q.push(n+1);
                arr[n+1]=1;
            }

            if(n*2<MAX && arr[n*2]==0)
            {
                q.push(n*2);
                arr[n*2]=1;
            }
        }
        time++;
    }
}

int main()
{
    int N,K;
    scanf("%d %d", &N,&K);

    printf("%d",bfs(N,K));
}