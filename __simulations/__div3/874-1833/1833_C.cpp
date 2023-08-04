#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <unordered_map>

using namespace std;

#define nl '\n'
#define sep "-------------->"
#define gogogo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout.precision(10);cout.setf(ios::fixed);
#define all(v) v.begin(), v.end()
#define int long long


void solve() {
    int n;cin >> n; vector<int> a(n);

    int eCnt = 0;
    int oCnt = 0;

    for(auto &y: a){
        cin >> y;
        eCnt += (y%2 == 0);
        oCnt += (y%2 == 1);
    }

    if(eCnt == 0 || oCnt == 0) {
        cout << "YES\n";
        return;
    }

    sort(all(a));
    auto begin = a[0];
    if(begin %2 == 1){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int32_t main()
{
    gogogo

        int T;
    cin >> T;

    int i=0;
    while(i++<T){
        //        cout << "\nTEST CASE [" << i << "]" << nl;
        solve();
    }

    return 0;
}
