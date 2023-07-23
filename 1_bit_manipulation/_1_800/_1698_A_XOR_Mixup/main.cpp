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
            if(i != n-1)
            mxor ^= a;
        }

        cout << mxor << endl;
    }
    return 0;
}
