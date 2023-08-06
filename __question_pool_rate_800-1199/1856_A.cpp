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
#define int long long




void solve() {
    int n;
    cin >> n;vector<int> a(n); for(int i=0; i<n;++i) cin >> a[i];

    int lastIdx = n-1;
    while(a.size() != 0 && *max_element(a.begin(), a.end()) == a[lastIdx]){
        a.pop_back();
        lastIdx--;
    }
	
    if(a.size() == 0) cout << "0" << nl;
    else cout << *max_element(a.begin(), a.end()) << nl;
}

int32_t main()
{
    gogogo

    int T;
    cin >> T;

    int i=0;
    while(i++<T){
//                cout << "\nTEST CASE [" << i << "]" << nl;
        solve();
    }

    return 0;
}
