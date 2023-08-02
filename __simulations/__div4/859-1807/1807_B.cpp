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

    int sumE = 0;
    int sumO = 0;
    for(int i=0; i<n; ++i){
        int a;
        cin >> a;
        if(a % 2 == 0) sumE+=a;else sumO+=a;
    }
    if(sumE > sumO) cout << "YES\n"; else cout <<"NO\n";

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