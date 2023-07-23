#include <iostream>
#include <bitset>
#include <math.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int t=0; t<T; ++t){
        int books;
        cin >> books;

        int64_t minCost_skill1 = 2e5;
        int64_t minCost_skill2 = 2e5;
        int64_t minCost_skillBoth = 2 * 2e5;

        bool flag1 = false;
        bool flag2 = false;

        while(books > 0 ){
            int cost;
            bitset<2> bits;
            cin >> cost >> bits;

            if(bits[0] == 1 && bits[1] == 1){
                if(minCost_skillBoth > cost){
                    minCost_skillBoth = cost;
                }
                flag1 = true;
                flag2 = true;
            }

            else if(bits[0] == 1){
                if(minCost_skill1 > cost){
                    minCost_skill1 = cost;
                }
                flag1 = true;
            }

            else if(bits[1] == 1){
                if(minCost_skill2 > cost){
                    minCost_skill2 = cost;
                }
                flag2 = true;
            }

            books--;
        }
        if(flag1 && flag2)
        {
            auto m = std::min((minCost_skill1 + minCost_skill2), minCost_skillBoth);
            cout << m << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}
