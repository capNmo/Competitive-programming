#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>

using namespace std;

bool isPowerOf2(int n){
    return ((n & (n-1)) == 0);
}

void solve(){

    int n = 0;
    cin >> n;

    if( n == 1) {
        cout << 3 << endl;
    }
    else if ( n%2 == 1){
        cout << 1 << endl;
    }
    else if ( isPowerOf2(n)){
        cout << n+1 << endl;
    }
    else {
        int i=1;
        while(i <= n){
            if(((n^i) > 0) && ((n&i) > 0)) break;
            i *= 2;
        }
        cout << i << endl;
    }
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
