#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <unordered_map>
#include<bits/stdc++.h>

using namespace std;

#define nl '\n'
#define sep "-------------->"
#define gogogo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout.precision(10);cout.setf(ios::fixed);
#define all(v) v.begin(), v.end()
#define int long long

void solve() {
    int n , sum = 0, cnt1 = 0;
    cin >> n;vector<int> a(n); for(int i=0; i<n;++i) {cin >> a[i]; sum += a[i]; if(a[i] == 1) cnt1 ++;}

    if((n-cnt1) == 0) {cout << "NO" << nl;return;}
    if( n == 1 ){cout << "NO" << nl;return;}
	
    int sumReqFor1s = 2 * cnt1;
    int sumReqForNot1 = n-cnt1;

    if(sum < sumReqFor1s + sumReqForNot1){cout << "NO" << nl;return;}
    else{cout << "YES" << nl;return;}
}

int32_t main()
{
    gogogo

        int T;
    cin >> T;

    int i=0;
    while(i++<T){
        //                cout << "\nTEST CASE [" << i << "]" << nl;
        solve();
    }

    return 0;
}
