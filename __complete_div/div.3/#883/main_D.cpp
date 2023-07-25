
#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>
#include <algorithm>


using namespace std;

void solve(){
    int n, d, h;
    cin >> n >> d>> h;

    vector<int> bases(n, 0.0);
    for(int i=0; i<n; ++i){
        cin >> bases[i];
    }

    long double area = (long double) d * h / 2.0;
    for(int i=0; i<n-1; ++i){
        if(bases[i+1] >= bases[i] + h){
            area += (long double) d * h / 2.0;
        }
        else{
            // zoozanageh (a+b) * h / 2
            long double H = bases[i+1] - bases[i];
            long double D = (long double) d * (h-H) / h;
            area += (d + D) * H / 2.0;
        }
    }
    cout << area <<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10); cout.setf(ios::fixed);

    int T;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}
