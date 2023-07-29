#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>
#include <algorithm>
 
using namespace std;
 
void solve(){
    double n;
    cin >> n;
    vector<uint64_t> a(n);
    vector<uint64_t> t(n);
 
    for(double i=0; i<n; ++i){
        cin >> a[i];
        t[i] = a[i];
    }
 
    sort(a.begin(), a.end());
 
    for(double i=0; i<n; ++i){
        if (a[i] %2 != t[i] %2 ){
            cout <<"NO" << endl;
            return;
        }
    }
    cout <<"YES" << endl;
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