#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>
 
using namespace std;
 
#define int long long
 
void solve(){
    int n;
    cin >> n;
 
    vector<int> a(n+1, -1);
    for(int i=1; i<=n-1; ++i){
        int x;
        cin >> x;
        a[x] = 0;
    }
 
    for(int i=1; i<=n; ++i){
        if(a[i] == -1) cout << i;
    }
 
    cout << endl;
}
 
int32_t main()
{
    solve();
 
    return 0;
}