#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <unordered_map>

using namespace std;

#define all(v) v.begin(), v.end()
#define int long long

int n, m;
vector<vector<int>> tree;

void solve(){
    int n,m; // v and e
    cin >> n >> m;
    tree.assign(n, vector<int>());

    for(int i=0; i<m; ++i){
        int u, v;
        cin >> u >> v;
        u--;v--;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    unordered_map<int,int> map;

    map[1] = 0;

    for(const auto &x: tree){
        if(x.size() != 1){
            if(map.count(x.size()) >= 1)
                map[x.size()] = map[x.size()]+1;
            else
                map[x.size()] = 1;
        }
        else{
            map[1]++;
        }
    }

    vector<int> v;
    for (auto p : map) {
        v.push_back(p.second);
    }
    sort(v.begin(), v.end());
    if (v.size() == 3) {
        cout << v[1] << ' ' << v[2] / v[1] << '\n';
    }
    else {
        cout << v[0] - 1 << ' ' << v[1] / (v[0] - 1) << '\n';
    }

}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t;
    cin >> t;
    while(t > 0){
        solve();
        --t;
    }
    return 0;
}
