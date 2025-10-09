#include <bits/stdc++.h>
#define int long long
using namespace std;

int MOD = 1e9 + 7;

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;
	vector<int> nums(n);
	int total = (n*(n+1))/2;
	int target = total/2;

	if(total % 2){
		cout << 0 << endl;
		return 0;
	}

	vector<int> dp(target+1, 0);
	dp[0] = 1;

	for(int i = 1; i <= n; i++){
		for(int j = target; j >= i; j--){
			dp[j] = (dp[j] + dp[j-i])%MOD;
		}
	}

	int inv2 = (MOD+1)/2;
	cout << dp[target]*inv2%MOD << endl;

	return 0;
}