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
    for(int i = 0; i < n; i++){
        for(int j = nums[i]; j <= x; j++){
            dp[j] = (dp[j] + dp[j - nums[i]]) % MOD;
        }
    }

    cout << dp[x] << endl;

    return 0;
}