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
        uint64_t n;
        cin >> n;

        int index = 0;
        while(n != 0 ){
            n = n >> 1;
            index ++;
        }
        cout << (int)pow(2, index-1) - 1 << endl;
    }
    return 0;
}
