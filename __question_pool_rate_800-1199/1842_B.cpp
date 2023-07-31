#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>
#include <algorithm>
#include "bits/stdc++.h"

#define int long long
#define ll long long
#define all(v) v.begin(), v.end()

using namespace std;

void solve(int t) {
    int n, k;
    cin >> n >> k;
    vector<int> a(3*n);
    int s=0;

    for(int i=0; i<3; ++i){
        for(int j=0; j<n; ++j) cin >> a[j];

        for(auto x: a){
            if((k|x) != k) break;
            s |= x;
        }
    }
    if(s == k) cout << "YES\n";
    else cout << "NO\n";
}

int32_t  main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin >> T;
    int i=1;

    while(i<=T){
        solve(i);
        ++i;
    }

    return 0;
}
