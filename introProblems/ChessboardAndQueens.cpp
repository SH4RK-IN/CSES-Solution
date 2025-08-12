#include <iostream>
#include <vector>
#include <string>
using namespace std;

int out = 0;
bool col[8], diag1[15], diag2[15];
// R\C  0 1 2 3 4 5 6 7
// 0    0 1 2 3 4 5 6 7
// 1    1 2 3 4 5 6 7 8
// 2    2 3 4 5 6 7 8 9
// 3    3 4 5 6 7 8 9 10
// 4    4 5 6 7 8 9 10 11
// 5    5 6 7 8 9 10 11 12
// 6    6 7 8 9 10 11 12 13
// 7    7 8 9 10 11 12 13 14

void queen(const int& u, vector<string>& board){
    
    if(u == 8){
        out++;
        return;
    }
    for(int i = 0; i < 8; i++){
        if(board[u][i] == '*') continue;
        if(col[i] || diag1[u + i] || diag2[u - i + 7]) continue;

        col[i] = diag1[u+i] = diag2[u-i+7] = true;
        queen(u+1, board);
        col[i] = diag1[u+i] = diag2[u-i+7] = false;
    }
}

int main(){
    vector<string> board(8, string(8, '.'));

    for(int i = 0; i < 8; i++){
        cin >> board[i];
    }
    
    queen(0, board);
    cout << out;

    return 0;
}