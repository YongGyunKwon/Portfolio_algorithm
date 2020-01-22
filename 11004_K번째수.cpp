#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, k;

	cin >> n >> k;
	vector<ll> num(n);

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num.begin(), num.end());

	cout << num[k - 1];

}