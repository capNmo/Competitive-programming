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
    int n, x;
    cin >> n >> x;

    vector<int> temp(n);
    vector<int> a(n);
    for(int i=0; i<n; ++i){
        cin >> a[i];
        temp[i] = a[i];
    }

    sort(all(a));

   int idx1 = -1;
   int idx2 = -1;
   int val = -1;
   for(int i=0; i<n; ++i){
       if(binary_search(a.begin()+i+1, a.end(), x-a[i])){
           val = a[i];
            break;
       }
   }

   for(int i=0; i<n; ++i){
        if(temp[i] == val && idx1 == -1) {
            idx1 = i;
        }
        else if(temp[i] == x-val) {
            idx2 = i;
        }
   }

   if(idx1 == idx2 || idx1 == -1 || idx2 == -1) cout << "IMPOSSIBLE" << endl;
   else cout << min(idx1, idx2) + 1 << " "<< max(idx1, idx2) + 1 << endl;

}
