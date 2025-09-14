#include <bits/stdc++.h>
#define int long long
using namespace std;

bool check(int& mid, int& n, int& t, vector<int>& machinesTime){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += mid/machinesTime[i];
        if(sum >= t) return true;
    }
    return false;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t; cin >> n >> t;
    vector<int> machinesTime(n);
    int minVal = LONG_LONG_MAX;
    for(int i = 0; i < n; i++){
        cin >> machinesTime[i];
        minVal = min(minVal, machinesTime[i]);
    }

    int l = 1, r = minVal*t;
    int mid, ans;
    while(l <= r){
        mid = (l+r)/2;
        
        if(check(mid, n, t, machinesTime)){
            ans = mid;
            r = mid-1;  
        }
        else l = mid+1;
    }

    cout << ans << endl;
    
    return 0;
}

// 3 7
// 3 2 5

// 2 3 5
