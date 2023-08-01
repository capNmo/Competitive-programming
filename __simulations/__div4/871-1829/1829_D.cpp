#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

#define int long long

void solve(){

    int n, m;
    cin >> n >> m;

    vector<int> a;
    bool flag = false;
    a.push_back(n);

    while(a.size() !=0 ){
        int val = a.back();
        a.pop_back();

        if(val == m){
            flag = true;
            break;
        }
        else if(val % 3 == 0){
            a.push_back(val/3);
            a.push_back(val/3 * 2);
        }
    }

    if(flag) cout << "YES\n";
    else cout << "NO\n";



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
    while(t > 1){
        solve();
        --t;
    }
    solve();
    return 0;
}