#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>
 
using namespace std;
 
#define int long long
 
void solve(){
    int n; cin >>n;
    vector<int>a(n);
    for(int i=0; i<n; ++i) cin >> a[i];
 
    int sum = 0;
    for(int i=0; i<n-1; ++i){
        if(a[i+1] < a[i]){
            sum += abs(a[i+1] - a[i]);
            a[i+1] = a[i];
        }
    }
 
    cout << sum << endl;
 
}
 
int32_t main()
{
    solve();
 
    return 0;
}