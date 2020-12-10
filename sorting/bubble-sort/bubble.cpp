#include<iostream>
#include <array>
using namespace std;

int main(){
	array<int,4> a{1,4,3,2};
	int i,j;
	for(i=0;i<a.size();i++)
		for(j=0;j<a.size()-i-1;j++)
			if (a[j]>a[j+1])
			swap(a[j],a[j+1]);
	for(auto i:a){
		cout << i<<endl;
	}
	// O(1) O(n^2) O(n^2)
	return 0;
}