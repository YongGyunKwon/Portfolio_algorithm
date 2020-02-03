#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

	int n;
	cin>>n;

	for (int i = 0; i < n; ++i) {
		int x1, y1, r1, x2, y2, r2;
		cin>>x1>>y1>>r1>>x2>>y2>>r2;
        
		int d = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
		int sum = (r1 + r2) * (r1 + r2);
		int dif = (r1 - r2) * (r1 - r2);

		if (d == 0) {
			if (dif == 0) printf("-1\n");
			else printf("0\n");
		}
		else if (d == sum || d == dif) printf("1\n");
		else if (dif < d && d < sum) printf("2\n");
		else printf("0\n");
	}
}