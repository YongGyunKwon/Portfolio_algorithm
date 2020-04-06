#include<iostream>
#include<vector>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int two, five, N, i;
	two = 0;
	five = 0;


	cin >> N;

	for (int i = 2; i <= N; i*=2)
		two += N / i;
	
	for (int i = 5; i <= N; i *= 5)
		five += N / i;
	
	two<five? cout << two: cout<<five;


	return 0;
}