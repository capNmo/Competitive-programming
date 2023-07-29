
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

    vector<int> a(n, 0);

    for(int i=0; i<n; ++i){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int sum = 0;
    for(int i=0; i<n/2; i++){
        sum += a[n-i-1] - a[i] ;
    }

    cout << sum << endl;
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
