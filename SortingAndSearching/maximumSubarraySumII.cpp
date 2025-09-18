#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    cin >> n >> a >> b;
    vector<int> perfix_sum(n+1);
    for(int i = 1; i <= n; i++){
        int temp; cin >> temp;
        perfix_sum[i] = temp + perfix_sum[i-1];
    }

    multiset<int> sub;
    int ans = LLONG_MIN;
    for(int i = a; i <= n; i++){
        if(i > b) sub.erase(sub.find(perfix_sum[i-b-1]));
        sub.insert(perfix_sum[i-a]);
        ans = max(ans, perfix_sum[i] - *sub.begin());
    }

    cout << ans << endl;
    return 0;
}