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

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int maxIdx = 0;
    int minIdx = 0;
    int idx2 = 0;

    for(int i=0; i<n; ++i){
        cin >> a[i];
        if(a[i] == n) maxIdx = i;
        if(a[i] == 1) minIdx = i;
        if(a[i] == 2) idx2 = i;
    }


    if(maxIdx > minIdx && maxIdx > idx2)
        cout << maxIdx + 1 << " " << max(minIdx,idx2 ) + 1  << endl;

    else if(maxIdx < minIdx && maxIdx < idx2)
        cout << maxIdx + 1 << " " << min(minIdx,idx2 ) + 1  << endl;

    else
        cout << minIdx + 1 << " " << idx2 + 1 << endl;

}

int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);


    int T;
    cin >> T;

    int i=0;
    while(i++<T){
//        cout << "\nTEST CASE [" << i << "]" << endl;
        solve();
    }

    return 0;
}
