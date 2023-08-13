#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <unordered_map>
#include <stdio.h>
#include <cstdio>
#include <stdlib.h>
#define _CRT_SECURE_NO_DEPRECATE

using namespace std;

#define gogogo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout.precision(0);cout.setf(ios::fixed)
#define int long long
#define ll long long
#define f first
#define s second
#define pb push_back
#define all(x) begin(x), end(x)
#define nl cout << '\n';
#define endl '\n'
#define sep "->"

void file(const string FILE = "TEST")
{
    if (fopen((FILE + ".INP").c_str(), "r"))
    {
        freopen((FILE + ".INP").c_str(), "r", stdin);
        freopen((FILE + ".ERR").c_str(), "w", stderr);
        freopen((FILE + ".OUT").c_str(), "w", stdout);
    }
}

void solve();

void presolve(int t = -1) {
//    if (t == -1) cin >> t;
//    while (t-- > 0) {
        // cout << "case " << counter + 1 << nd;
        solve();
//    }
}

int binarySearch(const vector<int>& arr, int x)
{
    int m = 0;
    int l = 0;
    int r = arr.size()-1;
    while (l <= r) {
        m = l + (r - l) / 2;
//        cout << "current m = "<< m << endl;;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }

    return m;
}


int32_t main() {
    gogogo;
    file("TEST");
    presolve();
}

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);
    for(int i=0; i<n; ++i){
        cin >> a[i].first;
        cin >> a[i].second;
    }

    sort(a.begin(), a.end(), [](const auto &l, const auto &r){ return l.second < r.second;});

    int cnt = 1;
    int lastEnded = a[0].second;

    int i=1;
    while(i<n){
        if(lastEnded > a[i].first){
            ++i;
            continue;
        }
        else{
            cnt++;
            lastEnded = a[i].second;
            ++i;
        }
    }

    cout << cnt;

}
