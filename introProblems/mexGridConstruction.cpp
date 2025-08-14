#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));

    for(int col = 0; col < n; col++){
        for(int row = 0; row < n; row++){
            set<int> s;
            for(int r = 0; r < row; r++){
                s.insert(a[r][col]);
            }
            for(int c = 0; c < col; c++){
                s.insert(a[row][c]);
            }   

            int x = 0;
            while(s.count(x)){
                x++;
            }

            a[row][col] = x;
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}