#include <iostream>
#include <vector>
using namespace std;

int n, f, c[1000];
vector<int> p;

void eratosetheones()
{
	for (int i = 2; i<1000; i++)
	{
		if (c[i]) continue;
		p.push_back(i);
		for (int j = 2 * i; j<1000; j += i) 
			c[j] = 1;
	}
	
}

int main()
{
	int T;
	
	eratosetheones();
	n = p.size();
	
	cin>>T;
	
	while (T--)
	{
		int k;

		cin>>k;

		for (int a = 0; a<n; a++)
		{
			for (int b = a; b<n; b++)
			{
				for (int c = b; c<n; c++)
				{
					if (p[a] + p[b] + p[c] == k)
					{
						f = 1;
						cout<<p[a]<<" "<< p[b]<<" "<< p[c]<<endl;
						goto next;
					}
				}
			}
		}
		
	next:
		if (!f) 
			cout<<endl;
		f = 0;
		
	}
	
}