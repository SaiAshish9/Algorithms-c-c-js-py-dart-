#include <bits/stdc++.h>

using namespace std;

void print(std::vector<int> v);

void merge(int A[ ] , int start, int mid, int end) {
	int p = start , q = mid + 1;
	int Arr[end - start + 1] , k = 0;
	for (int i = start ; i <= end ; i++) {
		if (p > mid)
			Arr[ k++ ] = A[ q++] ;
		else if ( q > end)
			Arr[ k++ ] = A[ p++ ];
		else if ( A[ p ] < A[ q ])
			Arr[ k++ ] = A[ p++ ];
		else
			Arr[ k++ ] = A[ q++];
	}
	for (int p = 0 ; p < k ; p ++) {
		A[ start++ ] = Arr[ p ] ;
	}
}

void print(std::vector<int> v) {
	for_each(v.begin(), v.end(), [](int x) {cout << x << " ";});
	cout << endl;
}

void mergesort(int a[], int l, int h) {
	if (l >= h) {
		return ;
	}
	int mid = (l + h) / 2;
	mergesort(a, l, mid);
	mergesort(a, mid + 1, h);
	merge(a, l, mid, h);
}

int main(int argc, char const *argv[])
{

#ifndef ONLINE_JUDGE
	freopen("ip.in", "r", stdin);
	freopen("op.in", "w", stdout);
#endif

	int a[8] = {2, 5, 8, 12, 3, 6, 7, 10};
	mergesort(a, 0, 7);
	vector<int> v(begin(a), end(a));
	print(v);
	return 0;
}

//  nlogn nlogn nlogn n