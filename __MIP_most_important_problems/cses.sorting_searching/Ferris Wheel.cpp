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
#define nl '\n'
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

int32_t main() {
    gogogo;
    file("TEST");
    presolve();
}

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i=0; i<n; ++i)
    {
        cin >> a[i];
    }

    sort(all(a));

    int i=0, j=n-1, wag=0;

    while(i < j){
        if(a[i] + a[j] <= k){
            wag++;
            a[i] = -1;
            a[j] = -1;
            ++i;--j;
        }
        else{
            --j;
        }
    }

    for(auto x: a) if(x != -1) wag++;

    cout << wag << endl;
}
