#include<iostream>
#include<cmath>

#define PI 3.14159265358979

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int r;

    cin>>r;


    //소수6째자리 사용하겠다!
    cout << fixed;
	cout.precision(6);

	cout << r*r*PI<<endl;
	cout << r*r*2.0<<endl;

    return 0;
}