#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n,x;
	vector<int> a;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		a.push_back(x);
	}
		
	
	sort(a.begin(),a.end());

	vector<int>::iterator iter = a.begin();


	while (iter!= (a.end()-1))
	{
		if (*iter == *(iter + 1)) {
			a.erase(iter);
			iter = a.begin();
		}
		else
			iter++;
	}
	
	for (iter=a.begin();iter!=a.end();iter++)
		cout << *iter<<" ";
	cout << endl;
	

}