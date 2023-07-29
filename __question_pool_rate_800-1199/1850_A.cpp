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
    int a, b, c;
 
    cin >> a >> b >> c;
 
    if(((a+b) >= 10) || ((b+c) >= 10) || ((c+a) >= 10))
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
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