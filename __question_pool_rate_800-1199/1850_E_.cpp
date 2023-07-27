#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

//void solve(){
//    long long n, maxArea;
//    cin >> n >> maxArea;

//    vector<long long> arr(n);
//    for(int i=0; i<n; ++i){
//        cin >> arr[i];
//    }

////     (x2 * x^2) + (x1 * x) + x0 = maxArea

//    long long x2 = n*4;
//    long long x1 = 0;
//    long long x0 = 0;

//    cout << "x2 = " << x2 << endl;

//    for(auto e: arr){
//        x1 += 4 * e;
//    }

//    cout << "x1 = " << x1 << endl;


//    for(auto e: arr){
//        x0 += pow(e, 2);
//    }

//    x0 -= maxArea;
//    cout << "x0 = " << x0 << endl;


//    long long delta = (x1 * x1) - (4 * x2 * x0);
//    cout << "delta = " << delta << endl;
//    cout << "sqt delta = " << sqrt(delta) << endl;


//    long long w1 = ((-x1) + sqrt(delta)) ;
//    w1 /= 2*x2;
//    long long w2 = ((-x1) - sqrt(delta)) ;
//    w2 /= 2*x2;

//    cout << "w1 = " << w1 << endl;
//    cout << "w2 = " << w2 << endl;
//    cout << "------------ max = " << max(w1, w2) << endl;
//    cout << "min = " << min(w1, w2) << endl;
//}

//void solve(){
//    long long n, maxArea;
//    cin >> n >> maxArea;

//    long long a;
//    for(int i=0; i<n; ++i){
//        cin >> a;
//        maxArea -= a*a;
//    }
//    cout << "-----------> " << (sqrt(maxArea))/(2*n) << endl;;
//}

#define int long long

void solve(){
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    int l = 1, r = 1e9;

    while(l <= r) {
        int mid = l + (r - l) / 2;
        int sum = 0;

        for(int i = 0; i < n; ++i) {
            sum += (a[i] + 2 * mid) * (a[i] + 2 * mid);
            if(sum > c) break;
        }
        if(sum == c) {
            cout << mid << "\n";
            return;
        }
        if(sum > c) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
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
