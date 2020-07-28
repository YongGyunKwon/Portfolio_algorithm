#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

const int MAX=20000+1;

vector<int> gra[MAX];
int ch[MAX];
int K,V,E;


void dfs(int num,int color)
{
    ch[num]=color;

    for(int i=0;i<gra[num].size();i++)
    {
        int next1=gra[num][i];
        if(ch[next1]==0)
            dfs(next1,3-color);
    }
}

bool checkcolor(void)
{
    for(int i=1;i<=V;i++)
    {
        for(int j=0;j<gra[i].size();j++)
        {
            int next1=gra[i][j];
            if(ch[i]==ch[next1])
                return false;
        }
    }
    return true;
}


int main()
{
    
    scanf("%d",&K);

    for(int i=0;i<K;i++)
    {
        
        for(int k=1;k<MAX;k++)
                gra[k].clear();
            
        memset(ch,0,sizeof(ch));


        scanf("%d %d",&V,&E);

        for(int j=0;j<E;j++)
        {
            int tmp1,tmp2;
            scanf("%d %d",&tmp1,&tmp2);

            gra[tmp1].push_back(tmp2);
            gra[tmp2].push_back(tmp1);
        }

        for(int k=1;k<=V;k++)
        {
            if(ch[k]==0)
            {
                dfs(k,1);
            }
        }

        if(checkcolor()==true)
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}