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
    int n, k;
    cin >> n >> k ;
    vector<int> arr(n);
    vector<int> diffs(2*n-1);

    for(int i=0; i<n; ++i){
        int a;
        cin >> a;
        arr[i] = a;
    }

    int j=0;
    for(int i=0; j<n-1; i+=2){
        diffs[i] = abs(arr[j+1] - arr[j]);
        diffs[i+1] = -1;
        j++;
    }

    while(k!=1){
        *max_element(all(diffs)) = -2;
        --k;
    }

    int sum = 0;
    for(auto a: diffs){
        if(a != -1 && a!= -2) sum += a;
    }
    cout << sum << "\n";
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
