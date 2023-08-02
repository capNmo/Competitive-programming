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

    string s;
    cin >> s;

    bool flag = true;
    for(int i=0;i<n;++i){

        for(int j=i; j<n; ++j){
            if(s[j] == s[i]){
                if(i%2 != j%2){
                    flag = false;
                    break;
                }
            }
        }

        if(!flag) break;
    }

    if(flag) cout << "YES\n";else cout << "NO\n";

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