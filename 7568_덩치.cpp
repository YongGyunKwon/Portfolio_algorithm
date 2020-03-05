#include<iostream>
using namespace std;

pair<int,int>body[50];


int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int rank[50];
    //rank값들 모두 초기에 1로 지정
    fill_n(rank,50,1);
    cin>>n;

    //입력받기
    for(int i=0;i<n;i++)
    {
        cin>>body[i].first>>body[i].second;
    }

    //순위정하기
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            if(body[i].first > body[j].first  &&  body[i].second > body[j].second)
            {
                rank[j]++;
            }

        }
    }

    //순위출력
    for(int i=0;i<n;i++)
    {
        cout<<rank[i]<<" ";

    }
     return 0;

}