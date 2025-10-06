#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x; cin >> n >> x;
    vector<int> prices(n), pages(n);
    for(int i = 0; i < n; i++) cin >> prices[i];
    for(int i = 0; i < n; i++) cin >> pages[i];

    vector<int> dp(x+1, 0);
    for(int i = 0; i < n; i++){
        for(int j = x; j > 0; j--){
            if(prices[i] > j) continue;

            dp[j] = max(dp[j], pages[i] + dp[j - prices[i]]);
        }
    }

    cout << dp[x] << endl;

    return 0;
}