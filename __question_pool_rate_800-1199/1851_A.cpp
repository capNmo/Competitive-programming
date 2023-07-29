#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>
 
using namespace std;
 
void solve(){
    double n, m, k, H;
    cin >> n >> m >> k >> H;
 
    double count = 0;
    for(int i=0; i<n; ++i){
        double h;
        cin >> h;
 
        double diff = std::abs(H-h);
 
        if( (diff >= k ) && (diff < m * k ) && fmod(diff, k) == 0.0){
            count++;
        }
    }
    cout << count << endl;
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