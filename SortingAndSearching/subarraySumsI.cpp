#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    int l = 0, sum = 0, ans = 0;
    for(int r = 0; r < n; r++){
        sum += nums[r];

        while(sum > x && l <= r){
            sum -= nums[l];
            l++;
        }

        if(sum == x) ans++;
    }

    cout << ans << endl;

    return 0;
}