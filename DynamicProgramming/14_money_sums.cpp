#include <bits/stdc++.h>
using namespace std;

const int MAX_SUM = 1e5;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  vector<int> nums(n);
  for(int i = 0; i < n; i++) cin >> nums[i];

  vector<vector<bool>> dp(n+1, vector<bool>(MAX_SUM+1, false));
  dp[0][0] = true;

  for(int i = 1; i <= n; i++){
    for(int sum = 0; sum <= MAX_SUM; sum++){
      dp[i][sum] = dp[i-1][sum];
      int psum = sum - nums[i-1];
      if(psum >= 0 && dp[i-1][psum]) dp[i][sum] = true;
    }
  }

  vector<int> ans;
  for(int sum = 1; sum <= MAX_SUM; sum++){
    if(dp[n][sum]) ans.push_back(sum);
  } 

  cout << ans.size() << endl;

  for(auto i : ans) cout << i << " ";

  return 0;
}