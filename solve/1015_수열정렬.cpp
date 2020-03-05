#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N;
	int B[51];

	cin >> N;

	vector<pair<int,int>>A;
	vector<int>P(N);
	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		A.push_back(make_pair(tmp, i));
	}

	sort(A.begin(),A.end());
	


	for (int i = 0; i < N; i++)
	{
		B[A[i].second]=i;
	}
	
	for (int i = 0; i < N; i++)
		cout << B[i]<<" ";

}