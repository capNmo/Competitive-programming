#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

void solve(){
    uint64_t n, m, h;
    cin >> n >> m >> h;

    vector<uint64_t> points(n, 0);
    vector<uint64_t> penalties(n, 0);

    for(uint64_t i=0; i<n; ++i){
        vector<uint64_t> times(m, 0);
        for(uint64_t j=0; j<m; ++j){
            cin >> times[j];
        }
        sort(times.begin(), times.end());

        uint64_t point = 0;
        uint64_t penalty = 0;
        uint64_t clock = 0;

        for(uint64_t t: times){
            clock += t;
            if(clock > h){
                break;
            }
            else{
                point++;
                penalty += clock;
            }
        }
        points[i] = point;
        penalties[i] = penalty;
    }

    int rank = 1;
    for(uint64_t k=1; k<n; ++k){
        if(points[0] < points[k]){
            rank++;
        }
        else if (points[0] == points[k]){
            if(penalties[0] > penalties[k]){
                rank++;
            }
        }
    }
    cout << rank << endl;
}

int main()
{
    int T;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}
