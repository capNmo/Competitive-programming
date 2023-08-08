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
    cin >> n;
    int sum = 0;
    for(int i=0; i<n; ++i){
        int a; cin >> a;
        sum += a;
    }

    if(sum % 2 == 0) cout << "YES" << nl;
    else cout <<"NO" << nl;
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
