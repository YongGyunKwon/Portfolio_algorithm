#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,M;
    int t[500][500];
    cin>>N>>M;

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>t[i][j];
        }
    }

    int max=0;

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            //1
            if(j+3<M)
            {
                int tmp=t[i][j]+t[i][j+1]+t[i][j+2]+t[i][j+3];
                if(max<tmp)
                    max=tmp;
            }
            //2
            if(i+3<N)
            {
                int tmp=t[i][j]+t[i+1][j]+t[i+2][j]+t[i+3][j];
                if(max<tmp)
                    max=tmp;
            }
            //3
            if((i+1)<N && (j+1)<M)
            {
                int tmp=t[i][j]+t[i+1][j]+t[i][j+1]+t[i+1][j+1];
                if(max<tmp)
                    max=tmp;
            }

            //4
            if((i+2)<N && (j+1)<M)
            {
                int tmp=t[i][j]+t[i+1][j]+t[i+2][j]+t[i+2][j+1];
                if(max<tmp)
                    max=tmp;
            }
            //5
            if((i+1)<N && (j+2)<M)
            {
                int tmp=t[i][j]+t[i+1][j]+t[i+1][j+1]+t[i+1][j+2];
                if(max<tmp)
                    max=tmp;
            }
            //6
            if((i+1)<N && (j+2)<M)
            {
                int tmp=t[i][j]+t[i][j+1]+t[i][j+2]+t[i+1][j+2];
                if(max<tmp)
                    max=tmp;
            }
            //7
            if((i+2)<N && (j+1)<M)
            {
                int tmp=t[i][j]+t[i][j+1]+t[i+1][j]+t[i+2][j];
                if(max<tmp)
                    max=tmp;
            }
            //8
            if((i+2)<N && 0<=(j-1))
            {
                int tmp=t[i][j]+t[i+1][j]+t[i+2][j]+t[i+2][j-1];
                if(max<tmp)
                    max=tmp;
            }
            //9
            if((i+1)<N &&(j+2)<M)
            {
                int tmp=t[i][j]+t[i][j+1]+t[i][j+2]+t[i+1][j];
                if(max<tmp)
                    max=tmp;
            }

            //10
            if(0<=(i-1) && (j+2)<M)
            {
                int tmp=t[i][j]+t[i][j+1]+t[i][j+2]+t[i-1][j+2];
                if(max<tmp)
                    max=tmp;
            }
            //11
            if((i+2)<N && (j+1)<M)
            {
                int tmp=t[i][j]+t[i][j+1]+t[i+1][j+1]+t[i+2][j+1];
                if(max<tmp)
                    max=tmp;
            }
            //12
            if((i+1)<N && (j+2)<M)
            {
                int tmp=t[i][j]+t[i][j+1]+t[i][j+2]+t[i+1][j+1];
                if(max<tmp)
                    max=tmp;
            }
            //13
            if((i+2)<N && (j+1)<M)
            {
                int tmp=t[i][j]+t[i+1][j]+t[i+2][j]+t[i+1][j+1];
                if(max<tmp)
                    max=tmp;
            }
            //14
            if(0<=(i-1) && (j+2)<M)
            {
                int tmp=t[i][j]+t[i][j+1]+t[i-1][j+1]+t[i][j+2];
                if(max<tmp)
                    max=tmp;
            }

            //15
            if((i+2)<N && 0<=(j-1))
            {
                int tmp=t[i][j]+t[i+1][j]+t[i+2][j]+t[i+1][j-1];
                if(max<tmp)
                    max=tmp;
            }
            //16
            if((i+2)<N && (j+1)<M)
            {
                int tmp=t[i+1][j]+t[i+2][j]+t[i][j+1]+t[i+1][j+1];
                if(max<tmp)
                    max=tmp;
            }
            //17
            if((i+1)<N && (j+2)<M)
            {
                int tmp=t[i][j]+t[i][j+1]+t[i+1][j+1]+t[i+1][j+2];
                if(max<tmp)
                    max=tmp;
            }

            //18
            if((i+2)<N && (j+1)<M)
            {
                int tmp=t[i][j]+t[i+1][j]+t[i+1][j+1]+t[i+2][j+1];
                if(max<tmp)
                    max=tmp;
            }
            //19
            if((i+1)<N && 0<=(j-1))
            {
                int tmp=t[i][j]+t[i][j+1]+t[i+1][j]+t[i+1][j-1];
                if(max<tmp)
                    max=tmp;
            }
        }
    }

    cout<<max<<endl;



    return 0;
}