#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

#define int long long

void solve(){
    int ts, te;
    cin >> ts >> te;

    int tsSum = 0;
    for(int i=0; i<ts; ++i) {
        int a;
        cin >> a;
        tsSum += a;
    }

    int teSum = 0;
    for(int i=0; i<te; ++i) {
        int a;
        cin >> a;
        teSum += a;
    }

    if(teSum > tsSum) cout << "Tenzing\n";
    else if(tsSum > teSum) cout << "Tsondu\n";
    else cout << "Draw\n";
}

int32_t main()
{
    int t;
    cin >> t;
    while(t > 1){
        solve();
        --t;
    }
    solve();

    return 0;
}

