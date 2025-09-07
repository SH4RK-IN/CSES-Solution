#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    unordered_set<int> seen;

    long long out = 0;
    int l = 0;
    for(int r = 0; r < n; r++){
        while(seen.count(nums[r])){
            seen.erase(nums[l]);
            l++;
        }

        seen.insert(nums[r]);
        out += r-l+1;
    }

    cout << out << endl;

    return 0;
}