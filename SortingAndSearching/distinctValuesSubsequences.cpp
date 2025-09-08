#include <bits/stdc++.h>
using namespace std;
#define int long long

int mod = 1e9 + 7;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> nums;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        nums.insert(temp);
    }

    unordered_set s(nums.begin(), nums.end());
    int out = 1;
    for(int i : s){
        out = (out*(nums.count(i)+1)) % mod;
    }

    cout << (out-1 + mod) % mod << endl;

    return 0;
}