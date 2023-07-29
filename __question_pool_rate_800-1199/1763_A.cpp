#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>

using namespace std;


//In the minimum element, we want to make every bit 0 when possible, it won't be possible to set a particular bit to 0
//when that bit is set in all the elements of a. Therefore, the minimum value we can achieve after performing the operations is the bitwise AND of all the elements of a.

//In the maximum element, we want to make every bit 1 when possible, it won’t be possible to set a particular bit to 1
//when that bit is not set in any of the elements of a. Therefore, the maximum value we can achieve after performing the operations is the bitwise OR of all the elements of a.

//Therefore the answer is (OR of the array — AND of the array).

//Time Complexity: O(n)

int main()
{
    int T;
    cin >> T;

    for(int t=0; t<T; ++t){
        int n;
        cin >> n;

        int a;
        cin >> a;
        int mor = a;
        int mand = a;
        for(int i=0; i<n-1; ++i){
            cin >> a;
            mor |= a;
            mand &= a;
        }

        cout << mor - mand << endl;
    }
    return 0;
}
