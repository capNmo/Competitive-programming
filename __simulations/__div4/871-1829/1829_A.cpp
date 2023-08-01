#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

#define int long long

void solve(){
    string s2 = "codeforces";
    string s;
    cin >> s;
    int cnt = 0;
    for(int i=0; i<10; ++i){
        if(s[i] != s2[i])cnt ++;
    }
    cout << cnt << "\n";
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