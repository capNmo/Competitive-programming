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
    int n;
    cin >> n ;

    int zeroPacks = 0;

    int res = -1;
    for(int i=0; i<n; ++i){
        int a;
        cin >> a;
        res &= a;
        if(res == 0){
            zeroPacks++;
            res = -1;
        }
    }

    if(zeroPacks == 0){
        cout << 1 << endl;
        return;
    }

    cout << zeroPacks << endl;

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
