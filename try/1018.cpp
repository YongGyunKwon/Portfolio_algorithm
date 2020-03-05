#include<iostream>
#include<string>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int M,N;
    int count=0; //바꾼 색깔의 수
    string chess[50][50];

    cin>>M>>N;

    //Input Chess Color
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>chess[i][j];
        }
    }


   return 0;
}