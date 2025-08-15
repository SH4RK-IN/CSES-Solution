#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<pair<int,int>> moves = {{-2,-1},{-2,1},{-1,2},{-1,-2},{1,-2},{1,2},{2,-1},{2,1}};

int main(){
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));
    a[0][0] = 0;
    queue<pair<int, int>> q;
    q.push({0,0});

    while(!q.empty()){
        auto u = q.front();
        q.pop();
        int col = u.first;
        int row = u.second;
        for(auto i : moves){
            int col2 = col + i.first;
            int row2 = row + i.second;
            if(col2 >= 0 && col2 < n && row2 >= 0 && row2 < n && (a[row2][col2] == 0)){
                q.push({col2, row2});
                a[row2][col2] = a[row][col] + 1;
            }
        }
    }
    a[0][0] = 0;

    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            cout << a[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}