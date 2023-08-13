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
    if (t == -1) cin >> t;
    while (t-- > 0) {
//         cout << "case " << counter + 1 << nd;
        solve();
    }
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

#include <numeric>
int arraySum(vector<int> &v)
{
    int initial_sum = 0;
    return accumulate(v.begin(), v.end(), initial_sum);
}

void solve() {
    int n;
    cin >> n;

    vector<int> min2s(n);
    vector<int> min1s(n);


    int idx = 0;
    for(int i=0; i<n; ++i){
        int l;
        cin >> l;
        vector<int> t(l);
        for(int i=0; i<l; ++i){
            cin >> t[i];
        }

        sort(all(t));

        min1s[idx] = t[0];
        min2s[idx] = t[1];
        idx++;
    }

    sort(all(min1s));
    sort(all(min2s));

    min2s[0] = min1s[0];

    cout << arraySum(min2s) <<endl;



}