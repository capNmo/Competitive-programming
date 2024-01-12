/*
#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <unordered_map>

using namespace std;

#define nl '\n'
#define sep "-------------->"
#define gogogo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout.precision(10);cout.setf(ios::fixed);
#define all(v) v.begin(), v.end()
#define int long long

void solve() {
    int n;cin >> n; vector<int> a(n);for(auto &y: a){cin >> y;}

}

int32_t main()
{
    gogogo

        int T;
    cin >> T;

    int i=0;
    while(i++<T){
        //        cout << "\nTEST CASE [" << i << "]" << nl;
        solve();
    }

    return 0;
}
*/


//int binary_search_find_index(std::vector<int> v, int data) {
//    auto it = std::lower_bound(v.begin(), v.end(), data);
//    if (it == v.end() || *it != data) {
//        return -1;
//    } else {
//        std::size_t index = std::distance(v.begin(), it);
//        return index;
//    }
//}

//void solve() {
//    int n, k;cin >> n >> k;

//    vector<int> a(n);for(int i=0;i<n;++i)cin >> a[i];
//    vector<int> b(n);for(int i=0;i<n;++i)cin >> b[i];
//    vector<int> res(n, -100);

//    sort(all(b));
//    int mo= 0;

//    for(auto t: a){
//        int temp = 1;
//        while(temp <=k )
//        {
//            int adxB = binary_search_find_index(b, t+temp);
//            if(adxB != -1){
//                res[mo++] = b[adxB];
//                b.erase(b.begin()+adxB);
//                break;
//            }
//            adxB = binary_search_find_index(b, t-temp);
//            if(adxB != -1){
//                res[mo++] = b[adxB];
//                b.erase(b.begin()+adxB);
//                break;
//            }
//            ++temp;
//        }

//        int idxB = binary_search_find_index(b, t);
//        if(idxB != -1){
//            res[mo++] = b[idxB];
//            b.erase(b.begin()+idxB);
//            continue;
//        }
//    }

//    cout << sep;
//    for(auto x: res) cout << x <<" ";
//    cout << endl;
