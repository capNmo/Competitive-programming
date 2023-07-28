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

void solve(int t){
    int A, B, C;
    cin >> A >> B >> C;

    int mainMod = -1;

    if(C == 1 && B>=3 && A >= 5){
        if(A % 2 == 0){
            int sum = 0;
            int count = 0;
            cout << "YES" << endl;
            while(sum != A){
                count++;
                sum += 2;
            }
            cout << count << endl;
            while(count>0){
                cout << 2 << " ";
                count --;
            }
            cout << endl;
            return;
        }else{
            int sum = 3;
            cout << "YES" << endl;

            int count = 1;
            while(sum != A){
                count++;
                sum += 2;
            }
            cout << count << endl;
            cout << 3 <<" ";
            count--;
            while(count>0){
                cout << 2 << " ";
                count --;
            }
            cout <<  endl;
            return;
        }
    }
    else if( A != C && B >= A){
        mainMod = A;
    }
    else if(A >=1 && B >= 1 && C != 1){
        mainMod = 1;
    }
    else{
        for(int i=B/2+1; i>=1; --i){
            if(i==C) continue;

            if( A % i == 0){
                mainMod = i;
                break;
            }
        }
    }

    if (mainMod != -1){
        cout << "YES" << endl;
        cout << A / mainMod << endl;
        int sum = 0;
        while(sum != A){
            sum += mainMod;
            cout << mainMod <<" ";
        }
    }else{
        cout << "NO";
    }
    cout  << endl;
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
