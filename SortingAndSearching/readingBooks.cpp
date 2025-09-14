#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int sum = 0, maxVal = 0;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        sum += temp;
        maxVal = max(maxVal, temp);
    }

    cout << max(sum , 2*maxVal) << endl;

    return 0;
}