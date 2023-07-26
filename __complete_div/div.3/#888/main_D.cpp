
#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    double n;
    cin >> n;

    vector<double> ps(n-1, 0);
    for(auto  i=0; i<n-1; ++i){
        cin >> ps[i];
    }

    vector<double> ini(n-1, 0);
    for(double i=n-2; i>0; --i){
        ini[i] = (ps[i] - ps[i-1]);
    }
    ini[0] = ps[0];

    sort(ini.begin(), ini.end());

    vector<double> temp(ini);

    // if sum of missing values == ini[0] then yes else no!

    uint64_t sumOfMissings = 0;
    std::set<double> setI(std::make_move_iterator(ini.begin()),
                  std::make_move_iterator(ini.end()));

    double k=0;
    double missingCnt=0;
    for(double i=1; i<= n; ++i){
        if(!setI.count(i)){
            sumOfMissings += (i);
            missingCnt++;
        }else{
            ++k;
        }

    }
    int cntMiss = 0;

    for(auto bb:temp){
        if(sumOfMissings == bb) cntMiss++;
    }

    if(sumOfMissings > n && setI.count(sumOfMissings) && missingCnt <= 2) cout << "YES\n";

    else if( sumOfMissings <= n && (cntMiss%2 ==0) && missingCnt <= 2 ) cout << "YES\n";

    else cout << "NO\n";

    return;
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
