#include <bits/stdc++.h>

using namespace std;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}


int partition (int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);
	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
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
	vector<int> v((istream_iterator<int>(ss)), (
	                  istream_iterator<int>()
	              ));
	int arr[v.size()];
	copy(v.begin(), v.end(), arr);
	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n - 1);
	for (auto i : arr) {
		cout << i << endl;
	}
	return 0;
}

// n n1.5 n1.5 i

