#include <iostream>
#include <string>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <unordered_map>
#include <map>
#include <stdio.h>
#include <cstdio>
#include <stdlib.h>
#define _CRT_SECURE_NO_DEPRECATE

using namespace std;

#define gogogo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout.precision(10);cout.setf(ios::fixed)
#define int long long
#define ll long long
#define f first
#define s second
#define pb push_back
#define all(x) begin(x), end(x)
#define nl '\n'
#define endl '\n'
#define sep "->"
#define on :

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
//         cout << "case " << counter + 1 << nd;
        solve();
//    }
}

int32_t main() {
    gogogo;
    file("TEST");
    presolve();
}

void solve() {
    int n;
    cin >> n;

    if( n == 0) {
        cout << "NO"; return;
    }
    vector<int> a(n+1); for (int i=1; i<=n; ++i) a[i] = i;

    sort(all(a));

    vector<int> l1;
    int suml1 = 0;
    vector<int> l2;
    int suml2 = 0;


    for(int i=n; i>0; --i){
        if(suml2 <= suml1 ){
            l2.push_back(a[i]);
            suml2 += a[i];

        }
        else{
            l1.push_back(a[i]);
            suml1 += a[i];
        }
    }

    if(abs(suml2 - suml1) == 0){
        cout << "YES\n";
        cout << l1.size() << nl;
        for(auto x: l1) cout << x <<" ";
        cout << nl;
        cout << l2.size() << nl;
        for(auto x: l2) cout << x <<" ";
        cout << nl;
    }else{
        cout << "NO";
    }
}
