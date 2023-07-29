#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>
#include <algorithm>
#include "bits/stdc++.h"

#define int long long
#define ll long long
#define all(v) v.begin(), v.end()

using namespace std;


void solve(int xx) {
        long long n; cin>>n;

        long long ans=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
                ans++;
            else
                break;
        }
        cout<<ans<<endl;
}

int32_t  main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin >> T;
    int i=1;

    while(i<=T){
        solve22(i);
        ++i;
    }
    return 0;
}
