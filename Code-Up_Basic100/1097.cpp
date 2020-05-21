#include<iostream>
using namespace std;


int a[20][20];


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    for(int i=1;i<=19;i++)
    {
        for(int j=1;j<=19;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    scanf("%d",&n);

    for(int k=0;k<n;k++)
    {
        int x,y;
        scanf("%d %d",&x,&y);

        for(int i=1;i<=19;i++)
        {
            if(a[x][i]==0)
                a[x][i]=1;
            else
            {
                a[x][i]=0;
            }
        }

        for(int j=1;j<=19;j++)
        {
            if(a[j][y]==0)
            {
                a[j][y]=1;
            }
            else
            {
                a[j][y]=0;
            }
            
        }

    }


    for(int i=1;i<=19;i++)
    {
        for(int j=1;j<=19;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }         


}