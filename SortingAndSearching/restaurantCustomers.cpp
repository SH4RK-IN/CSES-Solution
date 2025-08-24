#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<pair<int, int>> ab;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        ab.push_back({a, 1});
        ab.push_back({b, -1});
    }
    sort(ab.begin(), ab.end());
    
    int out = 0, temp = 0;
    for(auto &i : ab){
        temp += i.second;
        out = max(out, temp);
    }

    cout << out;

    return 0;
}