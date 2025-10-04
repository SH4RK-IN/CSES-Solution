// MLE
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<string> grid(n);
    for(int i = 0; i < n; i++){
        cin >> grid[i];
    }

    vector<vector<string>> dp(n, vector<string>(n));
    
    dp[n-1][n-1] = string(1, grid[n-1][n-1]);

    for(int j = n-2; j >= 0; j--){
        dp[n-1][j] = grid[n-1][j] + dp[n-1][j+1];
    }

    for(int i = n-2; i >= 0; i--){
        dp[i][n-1] = grid[i][n-1] + dp[i+1][n-1];
    }

    for(int i = n-2; i >= 0; i--){
        for(int j = n-2; j >= 0; j--){
            string right = grid[i][j] + dp[i][j+1];
            string down = grid[i][j] + dp[i+1][j];
            dp[i][j] = min(right, down);
        }
    }

    cout << dp[0][0] << endl;

    return 0;
}