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
#define endl '\n'
#define sep "->"
#define on :
#define print(x) for(auto a: x) cout << a <<" "
#define nl cout << "\n"

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
int binary_search_find_index(const std::vector<int>& v, int data) {
    auto it = std::lower_bound(v.begin(), v.end(), data);
    if (it == v.end() || *it != data) {
        return -1;
    } else {
        std::size_t index = std::distance(v.begin(), it);
        return index;
    }
}
void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    vector<int> b(m);
    for (int i=0; i<n; ++i) {
        cin >> a[i];
    }
    for (int i=0; i<m; ++i) {
        cin >> b[i];
    }

    sort(all(a));
    sort(all(b));


    int cnt = 0;
    int i=0, j=0;
    while(i<n && j<m){

        if(a[i]-k > b[j]){
            j++;
        }
        else if(a[i]+k < b[j]){
            i++;
        }
        else{
            ++i;
            ++j;
            cnt++;
        }

    }

    cout << cnt;
}
