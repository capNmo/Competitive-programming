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
    int b, c, h;

    cin >> b >> c >> h;

    int l=0;
    --b;
    ++l;
    while( (c!=0 || h!=0) && b>0){
        if(c > 0){
            ++l;
            --c;
        }
        else if( h>0){
            ++l;
            --h;
        }
        --b;
        ++l;
    }   

    cout << l << "\n";
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
