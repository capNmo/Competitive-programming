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
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n;++i){
        cin>> a[i];
    }

    vector<int> prefixSum(n);
    prefixSum[0] = a[0];
    for(int i=1; i<n;++i){
        prefixSum[i] = a[i] + prefixSum[i-1];
    }

    int l = 0;
    int r = n;
    int m = l + (r - l) / 2;
    int count = 28;

    while(l <= r  && count){
        m = l + (r - l) / 2;
//        cout << "l > " << l << endl;
//        cout << "r > " << r << endl;
//        cout << "m > " << m << endl;

        cout << "? " << m-l+1 << " ";

        for(int i=l; i<=m; ++i){
            cout << i+1 << " ";
        }
        cout << endl;

        int res;
        cin >> res;

        int desiredSum = 0;
        if(l == 0){
            desiredSum = prefixSum[m];
        }else{
            desiredSum = prefixSum[m] - prefixSum[l-1];
        }

        if(res == desiredSum){
//            cout << "still ok!!" <<  res << " - " << desiredSum << endl;
            l = m+1;
        }else{
//            cout << "shit!!" <<  res << " - "<< desiredSum << endl;
            r = m;
        }
        count--;
    }

    cout <<"! "<< m+1 << endl;
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