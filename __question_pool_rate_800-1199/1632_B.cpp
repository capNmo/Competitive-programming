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


int whichp2(int n){
    int idx = 0;
    int p = 0;
    while(n > 0){
        if((n & 1) == 1) p = idx;
        n = n >> 1;
        idx++;
    }
    return p;
}

void solve() {
    int n;
    cin >> n;
    int pivot = whichp2(n-1);
    pivot = pow(2, pivot);

    cout << pivot-1<<" ";

    for(int i=1; i<n; ++i){
        if(i == pivot) cout << pivot << " ";
        else if(i == pivot-1) cout << 0 << " ";
        else cout << i << " ";
    }

    cout <<endl;
}

int32_t main()
{
    gogogo

	int T;
    cin >> T;

    int i=0;
    while(i++<T){
        //        cout << "\nTEST CASE [" << i << "]" << nl;
        solve();
    }

    return 0;
}
