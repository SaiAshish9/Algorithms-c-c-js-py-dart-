#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

#ifndef ONLINE_JUDGE
	freopen("ip.in", "r", stdin);
	freopen("op.in", "w", stdout);
#endif

	string s;
	getline(cin, s);
	istringstream ss(s);
	vector<int> v;
	v.assign((istream_iterator<int>(ss)), (istream_iterator<int>()));
	for (int gap = v.size() / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < v.size(); i += 1) {
			int temp = v[i];
			int j;
			for (j = i; j >= gap && v[j - gap] > temp; j -= gap) {
				v[j] = v[j - gap];
			}
			v[j] = temp;
		}
	}

	for_each(v.begin(), v.end(), [](int x) {cout << x << endl;});

	return 0;
}