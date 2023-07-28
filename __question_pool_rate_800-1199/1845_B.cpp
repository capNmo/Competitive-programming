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
    pair<int, int> A, B, C;
    cin >> A.first >> A.second;
    cin >> B.first >> B.second;
    cin >> C.first >> C.second;

    bool added = false;
    int common = 0;
    if(A.first < B.first && A.first < C.first){
        int mmin = min(B.first, C.first);
        common += (abs(A.first - mmin)+1);
        added = true;
    }
    if(A.first > B.first && A.first > C.first){
        int mmin = max(B.first, C.first);
        common += (abs(A.first - mmin)+1);
        added = true;
    }

    if(A.second < B.second && A.second < C.second){
        int mmin = min(B.second, C.second);
        common += abs(A.second - mmin);
        if(!added) common++;
    }

    if(A.second > B.second && A.second > C.second){
        int mmin = max(B.second, C.second);
        common += abs(A.second - mmin);
        if(!added) common++;
    }

    if(common == 0) common = 1;

    cout <<  common << "\n";
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
