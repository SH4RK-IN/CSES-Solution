#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<pair<int, int>> task(n);
    for(int i = 0; i < n; i++){
        cin >> task[i].first >> task[i].second;
    }

    sort(task.begin(), task.end());

    int time = 0, out = 0;
    for(int i = 0; i < n; i++){
        time += task[i].first;

        out += task[i].second - time;
    }

    cout << out << endl;

    return 0;
}