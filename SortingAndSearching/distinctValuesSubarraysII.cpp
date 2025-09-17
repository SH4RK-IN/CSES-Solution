#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n , k; cin >> n >> k;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    map<int, int> freq;

    int l = 0, r = 0, distinct = 0, ans = 0;
    while(r < n){
        if(freq.find(nums[r]) == freq.end() || freq[nums[r]] == 0) distinct++;

        freq[nums[r]]++;

        while(distinct > k){
            freq[nums[l]]--;

            if(freq[nums[l]] == 0) distinct--;

            l++;
        }

        ans += r - l + 1;

        r++;
    }

    cout << ans << endl;

    return 0;
}