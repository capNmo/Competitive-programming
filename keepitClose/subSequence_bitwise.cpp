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
    string s;
    cin >> s;

    for(int i=0; i<pow(2,s.length()); ++i){
        string s2 = "";
        for(int j=0; j<s.length(); ++j){
            if(i & (1<<j)) s2+= s[j];
        }

        cout << s2 << endl;
    }

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

    while(T--){
        solve();
    }

}
