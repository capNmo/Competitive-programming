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
#define print(o) for(auto z: o)cout << z << " ";
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
    vector <int> v(n + 1), pos(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> v[i];
        pos[v[i]] = i;
    }
 
//    print(pos);
    int total_rounds = 1;
    for(int i = 2; i <= n; ++i){
        if(pos[i] < pos[i - 1]) total_rounds++;
    }
    cout << total_rounds << '\n';
 
}