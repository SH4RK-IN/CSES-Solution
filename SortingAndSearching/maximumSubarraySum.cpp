#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int best = a[0];
    int current = a[0];

    for(int i = 1; i < n; i++){
        current = max(a[i], current + a[i]); 
        best = max(best, current);
    }

    cout << best << endl;
}