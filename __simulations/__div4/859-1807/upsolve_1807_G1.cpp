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
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }

    sort(all(a));
    if(a[0] != 1) {cout << "NO\n"; return;}

    int sumall = a[0];
//    cout << sumall ;

    bool flag = true;
    for(int i=1; i<n; ++i){
//        cout << "i = " << i ;
        if(sumall < a[i]) {
            flag = false;
            break;
        }
        sumall += a[i];
    }
    if(flag) cout << "YES\n"; else cout<< "NO\n";
}

int32_t main()
{
    int T;
    cin >> T;

    while(T--){
        solve();
    }

}
