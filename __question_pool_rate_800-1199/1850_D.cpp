#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>
#include <algorithm>

#define int long long
#define ll long long
#define all(v) v.begin(), v.end()

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; ++i) cin >> a[i];
    sort(all(a));


    int mostContinues = 0;
    int res = 0;

    for(int i=0; i+1<n; ++i){
        if(a[i+1] - a[i] <= k) {
            mostContinues ++;
            if(mostContinues >= res)
                res = mostContinues;
        }
        else mostContinues = 0;
    }

    cout << n - (res+1) << "\n";
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
