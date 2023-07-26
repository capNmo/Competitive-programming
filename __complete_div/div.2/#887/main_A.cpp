
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

    vector<int> a(n, 0);
    for(int i=0; i< n; ++i){
        cin >> a[i];
    }

    int index = 0;
    int minDistance = a[1] - a[0];

    for(int i=0; i<n-1; ++i){
        if((a[i+1] - a[i]) <= minDistance ){
            minDistance = (a[i+1] - a[i]);
            index = i;
        }
    }

    if(a[index+1] - a[index]  < 0){
        cout << 0 << endl;
        return;
    }

    if(a[index+1] == a[index]){
        cout << 1 << endl;
        return;
    }

    cout << (a[index+1] - a[index])/2 + 1 << endl;


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
