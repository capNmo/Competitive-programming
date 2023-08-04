#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

#define int long long

void solve(){
    int length;
    cin >> length;
    int mmax = 0;
    int maxMax = 0;
    for(int i=0; i<length; ++i){
        char in;
        cin>> in;
        if(in == '0'){
            mmax ++;
            if(mmax > maxMax){
                maxMax = mmax;
            }
        }
        else{
            mmax = 0;
        }
    }

    cout << maxMax << "\n";
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