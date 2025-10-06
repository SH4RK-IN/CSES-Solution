#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x; cin >> n >> x;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    vector<int> dp(x+1);
    dp[0] = 1;
    for(int i = 1; i <= x; i++){
        for(int j : nums){
            if(i-j >= 0) dp[i] = (dp[i] + dp[i-j]) % MOD;
        }
    }

    cout << dp[x] << endl;

    return 0;
}