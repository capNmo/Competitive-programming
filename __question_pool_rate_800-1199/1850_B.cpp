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
 
void solve(){
    int  n;
    cin >> n;
 
    int index = 0;
    int mmax = -LONG_LONG_MAX;
 
    for(int i=0; i<n; ++i){
        int w, q;
        cin >> w >> q;
 
        if(q > mmax && w <= 10){
            index = i+1;
            mmax = q;
        }
    }
 
    cout << index << "\n";
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