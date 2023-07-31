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
    string s;
    cin >> s;
    string a;

    int i=0;
    while( i<s.length() ){
        a+=s[i];
        ++i;

        while( i<s.length() ){
            if(s[i] == a[a.length()-1]){
                ++i;
                break;
            }else{
                ++i;
            }
        }
    }
    cout << a << endl;

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
