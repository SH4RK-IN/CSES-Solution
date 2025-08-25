#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int mid = n/2, out = 0;
    for(int i = 0; i < n; i++){
        out += abs(a[mid]-a[i]);
    }
    cout << out;

    return 0;   
}