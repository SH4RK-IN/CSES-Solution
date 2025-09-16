#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    int perfix_sum = 0, ans = 0;
    map<int ,int> sum; // unordered_map can be use for O(1) but it can cause collision with some values cause it used hashmap but map uses red-black tree
    sum[0] = 1;
    for(auto i : nums){
        perfix_sum += i;
        ans += sum[perfix_sum-x];
        sum[perfix_sum]++;
    }

    cout << ans << endl;

    return 0;
}