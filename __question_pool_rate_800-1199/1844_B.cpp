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

// my algorithm: 2 10 4 6 1 8 7 5 9 3
// answer: 2 ..... 1 ..... 3

//void solve(int t){
//    int n;
//    cin >> n;
//    vector<int> arr(n);

//    if(n == 1){
//        cout << 1 << endl;
//        return;
//    }
//    if(n == 2){
//        cout << 1 << " " << 2 << endl;
//        return;
//    }
//    if(n == 3){
//        cout << 2 << " " << 1 << " " << 3 << endl;
//        return;
//    }
//    if(n >= 4){
//        int k=2;
//        int u = n;
//        int bound = n/2;
//        for(int i=0; i< bound; i+=2){

//            arr[i] = k;
//            arr[n-i-1] = k+1;

//            arr[i+1] = u;
//            arr[n-i-2] = u-1;

//            k += 2;
//            u -= 2;
//        }
//    }

//    if( n%2 == 0)
//        arr.insert(arr.begin()+n/2, 1);
//    else
//        arr[n/2] = 1;

//    for(auto a: arr){
//        cout << a << " ";
//    }

//    cout << "\n";
//}

void solve(int t){
    int n;
    cin >> n;

    if (n == 1) cout <<"1" << endl;
    else if (n == 2) cout << "1 2" << endl;
    else {
        int c = 4;
        vector<int> a(n);

        a[0] = 2,a[n/2] = 1,a[n-1] = 3;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) a[i] = c++;
        }
        for (int i = 0; i < n; i++) cout << a[i] << ' ';
        cout << "\n";
    }
}

int32_t  main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin >> T;
    int i=1;
    while(i<=T){
        solve(i);
        ++i;
    }

    return 0;
}
