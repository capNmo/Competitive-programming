
#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

bool isPalindrome(string s){
    for(int i=0; i<s.length() /2; ++i)
    {
        if(s[i] != s[s.length()-(i+1)]) return false;
    }
    return true;
}

void solve(){
    string s;
    cin >> s;
    vector<string> palSubs = {};

    int n=1;

    while(n < pow(2,  s.length())){
        bitset<10> bits(n);
        string rs = "";
        int index = 0;

        for(int i=0; i<10; ++i){
            if(bits[i] == 1){
                rs+= s[index];
            }
            index ++;
        }

        if(isPalindrome(rs)){
            palSubs.push_back(rs);
        }

        ++n;
    }

    sort(palSubs.begin(), palSubs.end());

    cout << palSubs[palSubs.size()-1] << endl;
}

int main()
{
//    int T;
//    cin >> T;

//    while(T--){
        solve();
//    }

    return 0;
}
