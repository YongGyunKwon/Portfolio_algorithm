#include <iostream>
using namespace std;

int main() {

	int in, out, cnt = 0, ans = 0;
	for (int i = 0; i < 4; i++) {
		cin >> out >> in;
		cnt += in - out;
		ans = (ans < cnt) ? cnt : ans;
	}

	cout << ans << endl;
	return 0;
}