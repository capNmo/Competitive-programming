
#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

#define int long long

void solve(){
    double a, b;
    cin >> a >> b;
    cout << ceil( float(a-1) / b) + 1 << "\n";
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
