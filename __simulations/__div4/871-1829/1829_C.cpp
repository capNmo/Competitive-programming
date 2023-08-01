#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

#define int long long

void solve(){
    int books, maxTime;
    cin >> books;
    int min01 = LONG_LONG_MAX;
    int min11 = LONG_LONG_MAX;
    int min10 = LONG_LONG_MAX;

    bitset<2> allOr = 0;
    while(books--){
        int m;
        bitset<2> b;
        cin >> m >> b;
        if(b == 0) continue;
        allOr = allOr | b;

        if(b == 1){
            if(min01 > m){
                min01 = m;
            }
        }
        if(b == 2){
            if(min10 > m){
                min10 = m;
            }
        }
        if(b == 3){
            if(min11 > m){
                min11 = m;
            }
        }
    }

    if(allOr != 3){
        cout << -1 << "\n";
    }else{
        if(min01 != LONG_LONG_MAX && min10 != LONG_LONG_MAX)
            cout << min(min01+min10, min11) << "\n";
        else{
            cout << min11 << "\n";
        }
    }

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