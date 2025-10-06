// TLE
#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case; cin >> test_case;
    for(int t = 0; t < test_case; t++){
        int n; cin >> n;
        vector<vector<int>> dp(n, vector<int>(8, 0));

        for(int i = 0; i < 8; i++) dp[0][i]++;

        for(int i = 1; i < n; i++){
            for(int j = 0; j < 8; j++){
                if(j == 0 || j == 2 || j == 3 || j == 4 || j == 5){
                    dp[i][j] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][3] + dp[i-1][4] + dp[i-1][5]) % MOD;
                }
                else{
                    dp[i][j] = (dp[i-1][2] + dp[i-1][6] + dp[i-1][7]) % MOD;
                }
            }
        }

        cout << (dp[n-1][2] + dp[n-1][6]) % MOD << endl;
    }

    return 0;
}