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
 
    cout << n << " ";
    while(n> 1) {
        if( n % 2 == 0) n/=2;
        else n = n*3 + 1;
 
        cout << n << " ";
    }
    cout << endl;
}
 
int32_t main()
{
    solve();
 
    return 0;
}