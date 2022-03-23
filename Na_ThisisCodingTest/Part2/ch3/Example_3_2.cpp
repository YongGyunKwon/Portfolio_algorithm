#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N,M,K;
    int first,second;
    int result=0;
    scanf("%d %d %d",&N,&M,&K);

    int Data[100];


    for(int i=0;i<N;i++)
        cin>>Data[i];

    first=Data[N-1];
    second=Data[N-2];

    while(true)
    {
        
        for(int i=0;i<3;i++)
            if(M==0)
                break;
            result+=first;
            M-=1;

        if(M==0)
            break;

        result+=second;

        M-=1;
    }

    cout<<result<<endl;

}

