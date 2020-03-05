#include<iostream>
#include<map>

using namespace std;

template <typename T1, typename T2>
void printTemplate(const multimap<T1, T2>& m) {
		for (const auto& t : m)
			cout << t.first << " " << t.second << '\n';
}

int main()
{
	int number;
	multimap<int, string> m;
	cin >> number;

	for (int i = 0; i < number; i++)
	{
		int num;
		string str;
		cin >> num >> str;
		m.insert(make_pair(num, str));
	}

	printTemplate(m);
}