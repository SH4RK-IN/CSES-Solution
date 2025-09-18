#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    vector<pair<int, int>> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i].second >> nums[i].first;
    
    sort(nums.begin(), nums.end());

    multiset<int> end_time;
    for(int i = 0; i < k; i++) end_time.insert(0);

    int ans = 0;
    for(const auto& i : nums){
        auto it = end_time.upper_bound(i.second);
        if(it == end_time.begin()) continue;

        end_time.erase(--it);
        end_time.insert(i.first);
        ans++;
    }

    cout << ans << endl;

    return 0;
}

