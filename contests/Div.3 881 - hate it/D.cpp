#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <unordered_map>
#include<bits/stdc++.h>

using namespace std;

#define nl '\n'
#define sep "-------------->"
#define gogogo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout.precision(10);cout.setf(ios::fixed);
#define all(v) v.begin(), v.end()
//#define int long long


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; ++i){int x; cin >>x; a[i] = x;}
    for(int i=0; i<n; ++i){int x; cin >>x; b[i] = x;}
    vector<int> c(n);

    for(int i=0; i<n; ++i){
        c[i] = a[i] - b[i];
    }
    auto x = *max_element(c.begin(), c.end());

    vector<int> res;
    for(int i=0; i<n; ++i){
        if(c[i] == x) {
            res.push_back(i);
        }
    }

    cout << res.size() << endl;
    sort(all(res));
    for(auto x: res) cout << x+1 <<" ";
    cout << endl;

}

int32_t main()
{
    gogogo


    int T;
    cin >> T;

    int i=0;
    while(i++<T){
        //cout << "\nTEST CASE [" << i << "]" << nl;
        solve();
    }

    return 0;
}
