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

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    set<int> temp;
    vector<int> b;
    vector<int> c;

    for(int i=0; i<n; ++i){
        int x;
        cin >> x;

        a[i] = x;
        temp.insert(x);
    }

    if(temp.size() == 1) {
        cout << -1 << endl;
        return;
    }

    int mmin = *min_element(all(a));
    for(auto x: a){
        if(x == mmin){
            b.push_back(x);
//            cout << "b "  << x << endl;;
        }else{
            c.push_back(x);
//            cout << "c "  << x << endl;
        }
    }

    cout << b.size() << " " << c.size() << endl;
    print(b);
    cout << endl;
    print(c);
    nl;
//    cout << " ---" << endl;






}