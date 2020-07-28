#include<iostream>
using namespace std;

const int MAX=100+1;

int arr[MAX];


int main()
{
    int refuse=0;
    int N;

    scanf("%d",&N);

    for(int i=0;i<N;i++)
    {
        int seat;
        scanf("%d",&seat);
        if(arr[seat])
            refuse++;
        arr[seat]=1;
    }

    printf("%d",refuse);

    return 0;
}