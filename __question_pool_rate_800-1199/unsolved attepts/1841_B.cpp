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

    int first, mini;
    cin >> first;
    int last = first;
    cout << 1 ;
    mini = first;
    bool breaked= false;

    while(--n){
        int a;
        cin >> a;
        if(breaked){
            if(a < last )cout << 0;
            else if(a <= first && a>=mini ){
                cout << 1 ;
                last = a;
            }
        }
        else
        {
            if(a >= last){
                cout << 1 ;
                last = a;

            }
            else{
                if(a <= first){
                    mini = a;
                    breaked = true;
                    last = a;
                    cout << 1 ;
                }
                else{
                    cout << 0;
                }
            }
        }
    }
    cout << endl;
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
