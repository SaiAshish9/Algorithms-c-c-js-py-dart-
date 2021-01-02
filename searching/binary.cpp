#include <bits/stdc++.h>

using namespace std;

int bin(vector<int> a, int l, int h, int key) {
	if (l == h) {
		if (a[l] == key) {
			return l;
		} else {
			cout<<"not found";
			return 0;
		}
	} else {
		int mid = (l + h) / 2;
		if (key ==  a[mid])
			return mid;
		else if (key < a[mid]) {
			return bin(a, l, mid - 1, key);
		} else {
			return bin(a, mid + 1, h, key);
		}
	}
}


int main(int argc, char const *argv[])
{

#ifndef ONLINE_JUDGE
	freopen("ip.in", "r", stdin);
	freopen("op.in", "w", stdout);
#endif

	string s;
	getline(cin, s);
	istringstream ss(s);
	vector<int> v((istream_iterator<int>(ss)), (istream_iterator<int>()));
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(),[](int x){cout << x <<" ";});
	int element;
	cin >> element;
	cout<<endl<<element<<endl;
	cout << bin(v, 0, v.size() - 1, element);
	return 0;
}