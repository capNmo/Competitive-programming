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

vector<vector<int>> g;
vector<int> leafCount;

void dfs(int root, int prev){
    if(g[root].size() == 1 && g[root][0] == prev)
    {
        leafCount[root] = 1;
    }
    else{
        for(auto n: g[root]){
            if(n != prev){
                dfs(n, root);
                leafCount[root] += leafCount[n];
            }
        }
    }
}

void solve(int t){
    int n;
    cin >> n;

    g.assign(n, vector<int>());

    for(int i=0; i<n-1; ++i){
        int u, v;
        cin >> u >> v;
        u--;v--; // codeforces index = 1
        g[u].push_back(v);
        g[v].push_back(u);
    }

    leafCount.assign(n, 0);
    dfs(0, -1);

    int q;
    cin >> q;
    for(int i=0; i<q; ++i){
        int x, y;
        cin >> x >> y;
        cout << leafCount[--x] * leafCount[--y] << "\n";
    }
}

int32_t  main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin >> T;
    int i=1;
    while(i<=T){
        solve(i);
        ++i;
    }

    return 0;
}
