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
	vector<int> arr((
	                    istream_iterator<int>(ss)
	                ), (
	                    istream_iterator<int>()
	                ));
	int max = *max_element(arr.begin(), arr.end());
	int range = max + 1;
	vector<int> count(range);
	for (int i = 0; i < arr.size(); i++)
		count[arr[i]]++;
	int i = 0, j = 0;
	while (i < max + 1) {
		if (count[i] > 0) {
			arr[j++] = i;
			count[i]--;
		} else {
			i++;
		}
	}
	for_each(arr.begin(), arr.end(), [](int x) {
		cout << x <<endl;
	});

	return 0;
}


