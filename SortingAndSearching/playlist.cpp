#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> k(n);
    for(int i = 0; i<n; i++){
     cin >> k[i];
    }

    int i = 0, out = 0;
    map<int, int> mp; // unordered_set can be unpredictable due to hash collisions so map is used for guaranteed performance
    for(int j = 0; j < n; j++){
        mp[k[j]]++;

        while(mp[k[j]] > 1){
            mp[k[i]]--;
            i++;
        }

        out = max(out, j - i + 1);
    }

    cout << out << endl;

    return 0;
}