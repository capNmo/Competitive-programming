#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int t=0; t<T; ++t){
        int n;
        cin >> n;
        int mxor = 0;
        for(int i=0; i<n; ++i){
            int a;
            cin >> a;
            mxor = mxor ^ a;
        }
        if(mxor == 0){
            cout << 0 << endl;
        }
        else{
            if(n % 2 == 1){
                cout << mxor << endl;
            }else{
                cout << -1 << endl;
            }
        }

    }
    return 0;
}
