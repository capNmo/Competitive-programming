
#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n;
    cin >> n;
    uint64_t sum = 0;

    long long a;
    cin >> a;
    sum += abs(a);

    if(n == 1) {
        cout << sum << " " << (a < 0)  << endl;
        return;
    }

    long long prev = a;
    long long posSetCount = a > 0;
    long long negSetCount = a < 0;

    for(long long i=0; i<n-1; ++i){
        cin >> a;
        if (a == 0) continue;
        sum += abs(a);

        // change in set sign
        if(a * prev <= 0){
            if(a < 0){
                negSetCount++;
            }else{
                posSetCount++;
            }
        }
        prev = a;
    }
    long long  toggles = min(posSetCount, negSetCount);
    if (posSetCount < negSetCount) toggles++;

    cout << sum << " " <<  toggles << endl;
    return;

}

int main()
{
    int T;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}
