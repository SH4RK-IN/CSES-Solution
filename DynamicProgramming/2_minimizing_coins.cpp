#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x; cin >> n >> x;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    vector<int> dp(x+1, INF);
    dp[0] = 0;
    for(int i = 1; i <= x; i++){
        for(int j : nums){
            if(i-j >= 0){
                dp[i] = min(dp[i-j] + 1, dp[i]);
            }
        }
    } 
//             condition     true  false      
    cout << ((dp[x] == INF) ? -1 : dp[x]) << endl; // ternary condition operator

    return 0;
}   