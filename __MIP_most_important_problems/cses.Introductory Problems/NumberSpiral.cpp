#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>
 
using namespace std;
 
#define int long long
 
void solve(){
    int i, j;
    cin >> i >> j;
 
    if( i == j ) cout << i * i - i + 1 << endl;
 
    else if(i < j){
        // abov diagonal
        if(j % 2 == 1) cout << (j * j - j + 1) - (i-j) << endl;
        if(j % 2 == 0) cout << (j * j - j + 1) + (i-j) << endl;
 
    }else if (i > j){
        // under diagonal
        if(i % 2 == 1) cout << (i * i - i + 1) - (i-j) << endl;
        if(i % 2 == 0) cout << (i * i - i + 1) + (i-j) << endl;
 
    }
}
 
int32_t main()
{
    int t;
    cin >> t;
 
    while (t--)
        solve();
 
    return 0;
}