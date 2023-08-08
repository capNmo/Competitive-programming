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

    int l = n*(n-1) / 2;
    map<int, int> mp;
    int a;
    int mmax = LONG_LONG_MIN;

    for(int i=0; i<l; ++i){
        cin >>a;
        if(mmax <= a) mmax = a;
        mp[a]++;
    }

    vector<int> res;
    int cap = n-1;

    for(auto a:mp){
        if(a.second < cap) {
            res.push_back(a.first);
            cap--;
        }
        else{
            while(a.second > 0){
                res.push_back(a.first);
                a.second -= cap;
                cap--;
            }
        }
    }
    while(res.size() != n){
        res.push_back(mmax);
    }

    for(auto x: res) cout << x << " ";
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
