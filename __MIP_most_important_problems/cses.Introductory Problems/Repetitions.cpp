#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>
 
using namespace std;
 
#define int long long
 
void solve(){
    string s;
    cin >> s;
 
    int mmax = 0;
    int A = 0;
    int G = 0;
    int C = 0;
    int T = 0;
 
    for(char x: s){
        if(x == 'A'){
            A ++;
            G = 0;
            C = 0;
            T = 0;
            if(A > mmax) mmax = A;
        }
        if(x == 'G'){
            G ++;
            A = 0;
            C = 0;
            T = 0;
            if(G > mmax) mmax = G;
        }
        if(x == 'C'){
            C ++;
            G = 0;
            A = 0;
            T = 0;
            if(C > mmax) mmax = C;
        }
        if(x == 'T'){
            T ++;
            G = 0;
            C = 0;
            A = 0;
            if(T > mmax) mmax = T;
        }
    }
 
    cout <<mmax << endl;
}
 
int32_t main()
{
    solve();
 
    return 0;
}