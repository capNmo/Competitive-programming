#include <iostream>
#include <string>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <unordered_map>
#include <map>
#include <stdio.h>
#include <cstdio>
#include <stdlib.h>
#define _CRT_SECURE_NO_DEPRECATE
 
using namespace std;
 
#define gogogo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout.precision(10);cout.setf(ios::fixed)
#define int long long
#define ll long long
#define f first
#define s second
#define pb push_back
#define all(x) begin(x), end(x)
#define nl '\n'
#define endl '\n'
#define sep "->"
#define on :
 
void file(const string FILE = "TEST")
{
    if (fopen((FILE + ".INP").c_str(), "r"))
    {
        freopen((FILE + ".INP").c_str(), "r", stdin);
        freopen((FILE + ".ERR").c_str(), "w", stderr);
        freopen((FILE + ".OUT").c_str(), "w", stdout);
    }
}
 
void solve();
 
void presolve(int t = -1) {
//    if (t == -1) cin >> t;
//    while (t-- > 0) {
//         cout << "case " << counter + 1 << nd;
        solve();
//    }
}
 
int32_t main() {
    gogogo;
    file("TEST");
    presolve();
}
int M = 1000000007;
 
void solve() {
    string s;
    cin >> s;
 
    map<char, int> mp;
 
    for(auto ch on s){
        mp[ch] ++;
    }
 
    int oddCnt = 0;
    char mmid = ' ';
    string res = "";
    bool flag = false;
 
    for(auto x: mp){
        if(x.s % 2 == 1){
            oddCnt++;
            mmid = x.f;
        }
        if(oddCnt >= 2) {
            flag = true;
            break;
        }
    }
 
    if(flag){
        cout << "NO SOLUTION";
        return;
    }else{
        string s = "";
        for(auto x: mp){
            if(x.first == mmid) continue;
            for(int i=1; i<=x.second/2; ++i) s+= x.f;
        }
 
        cout << s;
        for(int i=0; i<mp[mmid]; ++i) cout << mmid ;
        std::reverse(s.begin(), s.end());
        cout << s;
    }
}