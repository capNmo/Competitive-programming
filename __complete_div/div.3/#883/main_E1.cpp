
#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <algorithm>


using namespace std;

set<uint64_t> m;

void precalc(){
    for(uint64_t k=2; k< 1000; k++){
        uint64_t x = 1 + k;
        uint64_t power = k*k;
        for(uint64_t j=2; j<= 20; ++j){
            x += power;
            if (x > 1e6) break;
            m.insert(x);
            power *= k;
        }
    }
}

void solve(){
    uint64_t n;
    cin >> n;

    if(m.count(n)){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;

}

int main()
{
    precalc();

    int T;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}
