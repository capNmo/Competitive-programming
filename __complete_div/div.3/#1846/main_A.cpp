
#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int cut = 0;

    while(n > 0){
        int h, r;
        cin >> h >> r;

        if(h>r) cut++;
        --n;
    }
    cout << cut << endl;
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
