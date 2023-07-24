
#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

void solve(){
    vector<vector<string>> board(3,vector<string>(3));

    string line;

    for(int i=0; i< 3; ++i){
        cin >> line;
        board[i][0] = line[0];
        board[i][1] = line[1];
        board[i][2] = line[2];
    }

    string result = ".";

    if((((board[0][0] == board[1][1]) && board[1][1] == board[2][2])) ||
            ((board[2][0] == board[1][1]) && ( board[1][1]== board[0][2]))) {

        if(result == ".")
            result = board[1][1];
    }

    for(int i=0; i<3; ++i){
        if((board[i][0] == board[i][1]) && (board[i][1] == board[i][2])){

            if(result == ".")
                result = board[i][0];
        }
    }

    for(int i=0; i<3; ++i){
        if((board[0][i] == board[1][i]) && (board[1][i] == board[2][i])) {

            if(result == ".")
                result = board[0][i];
        }
    }

    if(result == ".")
        cout << "DRAW" << endl;
    else
        cout << result << endl;
}

int main()
{
    int T;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}
