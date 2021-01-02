#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <iterator>
#include <sstream>

// ctrl + alt +f AStyleFormattor c/c++/c#

// ctrl + shift + p -> python AutoPEP8

using namespace std;
static  vector<int> v;
int main(int argc, char
         const * argv[]) {

#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
#endif
    string s;
    getline(cin, s);
    istringstream ss(s);
    v.assign(
        (
            istream_iterator < int > (ss)
        ),
        (
            istream_iterator < int > ()
        )
    );
    int i = 0;
    for_each(v.begin(), v.end(), [ & i](int a) {
        int j = i - 1;
        int x = a;
        while (j > -1 && a > x) {
            v[j + 1] = a;
            j--;
        }
        v[j + 1] = x;
        i++;
    });
    for_each(v.begin(), v.end(), [](int x) {cout << x << endl;});
    return 0;
}