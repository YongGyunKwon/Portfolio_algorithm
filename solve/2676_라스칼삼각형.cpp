#include <iostream> 
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		cout<<1 + (n - m)*m<<endl;
	}
	return 0;
}
