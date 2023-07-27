#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>
#include <algorithm>
#include "bits/stdc++.h"

//#define int long long
#define ll long long
#define all(v) v.begin(), v.end()

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i=0; i<n; ++i){
        cin >> h[i];
    }
    int as = 0;
    for(auto a: h){
        if(a == 1) as++;
    }

    cout << (as/2) + (as%2==1) + (n-as) << "\n";
}


int32_t  main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
