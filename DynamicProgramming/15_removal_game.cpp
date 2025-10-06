#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  vector<int> nums(n); 
  int sum = 0;
  for(int i = 0; i < n; i++){
    cin >> nums[i];
    sum += nums[i];
  }
  vector<vector<int>> dp(n, vector<int>(n));
  
  for(int i = 0; i < n; i++) dp[i][i] = nums[i];

  for(int len = 2; len <= n; len++){
    for(int l = 0; l+len-1 < n; l++){
      int r = l+len-1;
      dp[l][r] = max(nums[l] - dp[l+1][r], nums[r] - dp[l][r-1]);
    }
  }
  
  cout << (sum+dp[0][n-1])/2 << endl;
  
  return 0;
}
