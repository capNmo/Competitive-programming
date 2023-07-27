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
    int bb, a, b, d;
    cin >> bb >> a >> b >> d;

    if(bb == 0) cout << 1 << "\n";
    else cout << (bb + min(a, b)*2) + (min(bb+1, abs(a-b) + d)) << "\n";
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
