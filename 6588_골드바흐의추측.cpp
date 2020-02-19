#include<iostream>
using namespace std;

#define SIZE 10000001;

int prime[10000001];

void era()
{
    for(int i=2;i*i<10000001;i++)
    {
        if(!prime[i])
        {
            for(int j=i*i;j<10000001;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    prime[1]=1;
}

void gold(int n)
{
    int mid=n/2;
    int i;
    int j;
    for(i=0,j=n; i<=mid; i++,j--)
    {
        if(i%2==1 && j%2==1 && !prime[i] && !prime[j])
        {
            cout<<n<<" = "<<i<<" + "<<j<<"\n";
            return ;
        }
    }
    cout<<"Goldbach's conjecture is wrong.\n";
    //출력에서 시간 초과 => endl이 아닌 \n을 써주자
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    era();

    while(1)
    {
        int n;
        cin>>n;
        if(n==0)
            break;
        gold(n);
    }

    return 0;
}