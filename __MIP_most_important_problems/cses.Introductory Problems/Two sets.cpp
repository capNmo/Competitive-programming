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
    int n;
    cin >> n;

    int sum = n * (n+1) / 2;

    if(sum % 2 == 0){
        cout << "YES" << endl;
        if(n % 2 == 0){
            cout << n/2<< endl;
            int last = n;
            for(int j=1; j<n/2; j+=2){
                cout << j << " ";
                cout << last << " ";
                last -= 2;
            }
            cout << endl;

            cout <<n/2<< endl;
            last = n-1;
            for(int j=2; j<=n/2; j+=2){
                cout << j << " ";
                cout << last << " ";
                last -= 2;
            }
            cout << endl;
        }else{
            cout << n/2 + 1 << endl;
            set<int> temp;
            for(int j=1; j<=n/2; j+=2){
                cout << j << " ";
                temp.insert(j);
            }
            for(int j=n/2+1; j<=n; j+=2){
                cout << j << " ";
                temp.insert(j);
            }
            cout << endl;
            cout << n/2 << endl;
            for(int j=1; j<=n; j+=1){
                if(temp.count(j) < 1) cout << j<<" ";
            }
            cout << endl;
        }
    }else{
            cout << "NO" << endl;
    }
}
