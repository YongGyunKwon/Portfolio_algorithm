#include<iostream>
#include<queue>
#include<vector>

using namespace std;

const int MAX=101;
int N;
int p1,p2;

vector<vector<int>> fam(MAX);
bool cfam[MAX]={false};

void bfs()
{
    queue<pair<int,int>> q;
    q.push(make_pair(p1,0));

    while(!q.empty())
    {
        int now=q.front().first;
        int rela=q.front().second;

        if(now==p2)
        {
            printf("%d",rela);
            return ;
        }
        q.pop();
        
        for(int i=0;i<fam[now].size();i++)
        {
            int next=fam[now][i];
            if(cfam[next]==false)
            {
                cfam[next]=true;
                q.push(make_pair(next,rela+1));
            }
        }
        

        
    }
    printf("-1");
}

int main()
{
    
    int count;

    scanf("%d",&N);

    scanf("%d %d",&p1,&p2);

    scanf("%d",&count);

    for(int i=0;i<count;i++)
    {
        int tp1,tp2;
        scanf("%d %d",&tp1,&tp2);


        fam[tp1].push_back(tp2);
        fam[tp2].push_back(tp1);
    }

    bfs();

}
