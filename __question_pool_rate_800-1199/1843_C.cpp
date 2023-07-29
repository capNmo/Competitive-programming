#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int t=0; t<T; ++t){
        int64_t value;
        cin >> value;
        int64_t sum = 0;
        while(value >= 1){
            sum += bitset<64>(value).to_ullong();
            value = value >> 1;
        }
        cout << sum << endl;
    }
    return 0;
}
