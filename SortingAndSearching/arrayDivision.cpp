#include <bits/stdc++.h>
#define int long long
using namespace std;

bool DivCheck(const vector<int>& nums, const int& k, const int& max_sum){
    int sub_cnt = 1, sub_sum = 0;

    for(const int& i : nums){
        if(sub_sum + i > max_sum){
            sub_cnt++;
            sub_sum = 0;
        }
        
        sub_sum += i;    
    }
                                                                            
    return sub_cnt <= k;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    int l = *max_element(nums.begin(), nums.end());
    int r = accumulate(nums.begin(), nums.end(), 0LL);

    while(l < r){
        int mid = (l+r)/2;
        if(DivCheck(nums, k , mid)) r = mid;
        else l = mid+1;
    }

    cout << l << endl;

    return 0;
}