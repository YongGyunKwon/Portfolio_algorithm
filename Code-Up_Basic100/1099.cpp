#include<iostream>
using namespace std;

int main()
{
    int a[11][11];

    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int x=2;
    int y=2;
    while(true)
    {
        if(a[x][y]==2)
            break;
        a[x][y]=9;
        if(a[x][y+1]==1)
        {
            if(a[x+1][y]==1)
                break;
        }
        else
        {
            y++;
        }       
        
    }
    a[x][y]=9;

    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }



}