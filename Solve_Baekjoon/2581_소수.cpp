#include<iostream>

using namespace std;


int number[1000001];

void era(void)
{

	number[0] = number[1] = -1;

	for (int i = 2; i<1000001; i++)
		number[i] = i;



	for (int i = 2; i * i <= 1000001; i++)
		if (number[i] == i)
			for (int j = i * i; j < 1000001; j += i)
				if (number[j] == j)
					number[j] = i;
}



int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);


    int m,n;
    int sum=0;
    int min=0;
    cin>>m>>n;

    era();

    for(int i=m;i<=n;i++)
    {
        if(number[i]==i)
        {
            sum+=i;
        }
        if(min==0&&number[i]==i)
            min=i;
    }


    if(sum==0)
        cout<<"-1";
    else
    {
        cout<<sum<<endl;
        cout<<min<<endl;
    }

    return 0;
}