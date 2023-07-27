#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    int key=0;
    for(int i=n; i>=0; --i){
        int a = n;
        int b = i;
        bool condition = true;
        for(int j=k; j>2; --j){
            int c = a - b;
            condition &= c <= b;
            condition &= min(a, b) >= 0;
            if(!condition) break;
            a = b;
            b = c;
        }

        if(condition){
            cnt++;
            key = 1;
        }
        if(!condition && key == 1)
        {
            break;
        }
    }
    cout << cnt << endl;
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
