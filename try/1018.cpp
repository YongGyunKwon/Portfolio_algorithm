#include<iostream>
#include<string>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int M,N;
    int count=0; //바꾼 색깔의 수
    char chess[50][50];

    cin>>M>>N;

    //Input Chess Color
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>chess[i][j];
        }
    }

    //Change Color

    switch(chess[0][0])
    {
        //chess[0][0] 칸이 white인 경우
        case 'W':
        {
            for(int k=0;k<8;k++)
            {
                for(int z=0;z<8;z++)
                {
                    //white로 바꾸기 작업
                    if(k%2==0 && z%2==0 && chess[k][z]=='B')
                    {
                        count++;
                        chess[k][z]='W';
                    }
                    else if(k%2==1 && z%2==1 && chess[k][z]=='B')
                    {
                        count ++;
                        chess[k][z]='w';
                    }
                    //black으로 바꾸기 작업
                    else if(k%2==0&&z%2==1 && chess[k][z]=='W')
                    {
                        count++;
                        chess[k][z]='B';
                    }
                    else if(k%2==1 && z%2==0 && chess[k][z]=='W')
                    {
                        count++;
                        chess[k][z]='B';
                    }
                    else
                    {
                        ;
                    }
                }
            }
            break;
        }
        //chess[0][0]이 Black인 경우
        case 'B':
        {
            for(int k=0;k<8;k++)
            {
                for(int z=0;z<8;z++)
                {
                    //BLACK로 바꾸기 작업
                    if(k%2==0 && z%2==0 && chess[k][z]=='W')
                    {
                        count++;
                        chess[k][z]='W';
                    }
                    else if(k%2==1 && z%2==1 && chess[k][z]=='W')
                    {
                        count ++;
                        chess[k][z]='w';
                    }
                    //White로 바꾸기 작업
                    else if(k%2==0&& z%2==1 && chess[k][z]=='B')
                    {
                        count++;
                        chess[k][z]='W';
                    }
                    else if(k%2==1 && z%2==0 && chess[k][z]=='B')
                    {
                        count++;

                        chess[k][z]='W';
                    }
                    else
                    {
                        ;
                    }
                }
            }

        }
        break;
    }

    cout<<count<<endl;
   return 0;
    
}