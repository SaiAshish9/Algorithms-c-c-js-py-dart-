#include <bits/stdc++.h>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[])
{

#ifndef ONLINE_JUDGE
 freopen("ip.in","r",stdin);
 freopen("op.in","w",stdout);
#endif

string s;
getline(cin,s);
istringstream ss(s);
vector<int> v((istream_iterator<int>(ss)),istream_iterator<int>());

int j,k;

for(int i=0;i<v.size()-1;i++){
	for(j=k=i;j<v.size();j++){
		if(v.at(j)<v.at(k)){
			k=j;
		}
	}
	swap(v[i],v[k]);
}

for_each(v.begin(), v.end(),[](int x){cout<<x<<endl;});


	return 0;
}