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
    int n, k;cin >> n >> k;

    vector<pair<int, int>> a(n);
    vector<int> b(n);
    vector<int> res(n);

    for(int i=0; i<n; ++i){
        int y;
        cin >> y;
        a[i] = pair(y,i);
    }

    for(int i=0; i<n; ++i){
        cin >> b[i];
    }

    std::sort(a.begin(), a.end(), [](auto &left, auto &right) {
        return left.first < right.first;
    });

    sort(all(b));

    for(int i=0; i<n; ++i){
        res[a[i].second] = b[i];
    }

    for(auto x:res) cout << x << " " ;
    cout << nl;

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
