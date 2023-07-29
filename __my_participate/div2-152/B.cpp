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

void solve(){
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v(n);
    for(int i=0; i<n; ++i){
        int a;
        cin >> a;
        v[i] = {a, i};
    }

    std::sort(v.begin(), v.end(), [](auto &left, auto &right) {
        return left.first < right.first;
    });

    int last = n-1;
    while(last >= 0){

        for(int p = last-1; p>=0; --p){
            if(v[p].first == v[last].first && v[last].second > v[p].second){
                auto temp2 = v[p];
                v[p] = v[last];
                v[last] = temp2;
            }
        }
        v[last].first -= k;

        if(v[last].first <=0 ){

            cout << v[last].second+1 << " ";
            last --;
        }
        else{
            for(int j=last-1; j>=0; --j){
                if(v[j].first >= v[last].first)
                {
                    auto temp = v[last];
                    v[last] = v[j];
                    v[j] = temp;

                    for(int p = j; p>=0; --p){
                        if(v[p].first == v[j].first && v[j].second > v[p].second){
                            temp = v[p];
                            v[p] = v[j];
                            v[j] = temp;
                        }
                    }
                    break;
                }
            }
        }

//        for(auto a: v){
//            cout << "|" << a.first << " - " << a.second << "|" << " " ;
//        }
//        cout << endl;
    }
    cout << endl;
}


int32_t  main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
