#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;
    vector<int> position(n);
    for(int i = 0; i < n; i++) cin >> position[i];

    set<int> traffic_light;
    multiset<int> length;
    traffic_light.insert(0);
    traffic_light.insert(x);
    length.insert(x);

    for(int i = 0; i < n; i++){
        int p = position[i];

        auto inserted = traffic_light.insert(p).first;
        auto l = prev(inserted);
        auto r = next(inserted);
        int left = *l;
        int right = *r;

        auto it = length.find(right - left);
        if(it != length.end()) length.erase(it);


        length.insert(p - left);
        length.insert(right - p);

        cout << *length.rbegin() << " ";
    }

    return 0;
}