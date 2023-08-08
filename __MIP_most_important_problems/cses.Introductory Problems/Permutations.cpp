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
    if (n == 1) {cout << 1 << endl; return;}
 
    if (n <= 3) cout << "NO SOLUTION" << endl;
 
    else{
        for(int i=2; i<=n; i+=2)  cout << i << " ";
        for(int i=1; i<=n; i+=2)  cout << i << " ";
    }
    cout << endl;
}
 
int32_t main()
{
    solve();
 
    return 0;
}