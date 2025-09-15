#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n , target;
    cin >> n >> target;
    vector<pair<int, int>> nums(n);
    for(int i = 0; i<n; i++){
        cin >> nums[i].first;
        nums[i].second = i+1;
    }

    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++){
        int tempTarget = target - nums[i].first;
        int l = i+1, r = n-1;
        while(l < r){
            int sum = nums[l].first + nums[r].first;

            if(tempTarget == sum){
                cout << nums[i].second << " " << nums[l].second << " " << nums[r].second << endl;
                return 0;
            }
            if (sum < tempTarget) l++;
            else r--;
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}