#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;    

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    vector<vector<int>> dp(n, vector<int>(m+2, 0));
    
    if(nums[0] == 0){
        for(int i = 1 ; i <= m; i++){
            dp[0][i] = 1;
        }
    }
    else{
        dp[0][nums[0]] = 1;
    }

    for(int i = 1; i < n; i++){
        if(nums[i] == 0){
            for(int j = 1; j <= m; j++){
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1]) % MOD;
            }
        }
        else{
            dp[i][nums[i]] = (dp[i-1][nums[i]-1] + dp[i-1][nums[i]] + dp[i-1][nums[i]+1]) % MOD;
        }
    }

    if(nums[n-1] == 0){
        int ans = 0;
        for(int i = 1; i <= m; i++){
            ans = (ans + dp[n-1][i]) % MOD;
        }
        cout << ans << endl;

        return 0;
    }
    cout << (dp[n-1][nums[n-1]]) % MOD << endl;

    return 0;
}

// 3 5
// 2 0 2

//     2
// 1 2 3 4 5
//     2