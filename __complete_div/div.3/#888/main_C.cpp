#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>
#include <algorithm>
 
using namespace std;
 
void solve(){
    double n, k;
    cin >> n >> k;
 
    vector<uint64_t> a(n);
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
 
    double cnt = 0;
    if(a[n-1] == a[0]){
        for(int i=0; i<n; ++i){
            if(a[i] == a[0]) {
                cnt++;
                if(cnt >= k) {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }
 
    double bindex = -1;
    double bcnt = 0;
 
    for(int i=0; i<n; ++i){
        if(a[i] == a[0]) bcnt++;
        if(bcnt >= k){
            bindex = i;
            break;
        }
    }
 
 
    double eindex = -1;
    double ecnt = 0;
    for(int i=n-1; i>=0; --i){
        if(a[i] == a[n-1]) ecnt++;
        if(ecnt >= k){
            eindex = i;
            break;
        }
    }
 
    if(eindex != -1 && bindex != -1 && eindex > bindex){
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" << endl;
    }
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