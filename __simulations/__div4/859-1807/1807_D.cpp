#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <unordered_map>

using namespace std;

#define all(v) v.begin(), v.end()
#define int long long


void solve(){
    int n,q;
    cin >> n>> q;

    vector<int> a(n);
    int sum = 0;
    for(int i=0; i<n;++i){
        cin>> a[i];
        sum += a[i];
    }

    vector<int> prefixSum(n);
    prefixSum[0] = a[0];
    for(int i=1; i<n;++i){
        prefixSum[i] = a[i] + prefixSum[i-1];
    }

    for(int i=0; i<q; ++i){
        int l, r, k;
        cin >> l >> r >> k;
        l--;r--;

        int center = (r-l+1) * k;

        int left  = 0;
        if(l > 0)
            left = prefixSum[l-1];
        else
            left = 0;

        int right = 0;
        if(r < n)
            right = prefixSum[n-1] - prefixSum[r];
        else
            right = prefixSum[n-1];

        if((center+left+right) %2 == 0)cout << "NO\n" ; else cout << "YES\n";
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t;
    cin >> t;
    while(t > 0){
        solve();
        --t;
    }
    return 0;
}