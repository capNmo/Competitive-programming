#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>
#include <memory.h>

using namespace std;

#define all(v) v.begin(), v.end()
#define int long long

int n, m;
int lake[1010][1010];
bool v[1010][1010];

int dfs(int i, int j) {
    if (i < 0 || i > 1010 || j < 0 || j > 1010 || v[i][j] || lake[i][j] == 0) {
        return 0;
    }
    v[i][j] = true;
    int volume = lake[i][j];
    volume += dfs(i + 1, j);
    volume += dfs(i - 1, j);
    volume += dfs(i, j + 1);
    volume += dfs(i, j - 1);
    return volume;
}

void solve(){

    cin >> n >> m;
    vector<int> resList(1010);

    memset(v, false, 1010*sizeof(bool));
    memset(lake, 0, 1010*sizeof(int));

    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            v[i][j] = false;
        }
    }

    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            cin >> lake[i][j];
        }
    }

    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            if( !v[i][j] && lake[i][j] > 0) {
                auto x = dfs(i, j);
                resList.push_back(x);
            }
        }
    }

    cout << *max_element(all(resList)) << endl;

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
    while(t > 1){
        solve();
        --t;
    }
    solve();
    return 0;
}
