#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int people[9];
    int sum=0;
    
    for(int i=0;i<9;i++)
    {
        cin>>people[i];
        sum+=people[i];
    }

    sort(people,people+9);

    for(int j=0;j<9;j++)
    {
        for(int k=j+1;k<9;k++)
        {
            if(sum-people[j]-people[k] ==100)
            {
                for(int z=0;z<9;z++)
                {
                    if(j==z||k==z)
                        continue;
                        
                    cout<<people[z]<<endl;
                    
                }
                return 0;
            }
        }
    }

}