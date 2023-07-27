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

    string res = "";
    for(int i=0; i<8; ++i){
        string s;
        cin >> s;

        if(s != "........") {
            for(int i=0; i<8; ++i){
                if(s[i] != '.'){
                    res += s[i];
                }
            }
        }
    }
    cout << res << "\n";
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
