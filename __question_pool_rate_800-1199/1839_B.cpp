
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
    vector<vector<int>> lamps(n+1);

    for(int i=0; i<n; ++i){
        int a, b;
        cin >> a >> b ;
        lamps[a].push_back(b);
    }

    int sum = 0;
    for(int i=1; i<=n; i++){
        sort(lamps[i].begin(), lamps[i].end());
        reverse(lamps[i].begin(), lamps[i].end());

        int counter = 0;
        while(counter < i && lamps[i].size() > counter){
            sum += lamps[i][counter];
            counter ++;
        }
    }
    cout << sum << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while(t > 1){
        solve();
        --t;
    }
    solve();

    return 0;
}
