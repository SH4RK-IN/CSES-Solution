#include <bits/stdc++.h>
using namespace std;

const int N = 4;
int out = 0;
vector<pair<int,int>> moves = {{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1}};
bool visited[N][N];

bool isEmpty(int row, int col){
    return 0 <= min(col, row) && N > max(col, row) &!visited[row][col];
}

void dfs(int row, int col){
    if(isEmpty(row-1, col) && isEmpty(row+1, col) && !isEmpty(row, col-1) && !isEmpty(row, col+1)){
        return;
    }
    if(!isEmpty(row-1, col) && !isEmpty(row+1, col) && isEmpty(row, col-1) && isEmpty(row, col+1)){
        return;
    }

    if((row < 0 || col < 0 || row >= N || col >= N) || visited[row][col]) return;

    if(row == N-1 && col == N-1){
        out++;
        return;
    }

    visited[row][col] = true;


    for(auto& i : moves){
        dfs(row + i.first, col + i.second);
    }

    visited[row][col] = false;
}

int main(){
    dfs(0, 0);
    cout << out << endl;
    return 0;
}