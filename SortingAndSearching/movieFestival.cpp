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
        ab.push_back({a, b});
    }
    sort(ab.begin(), ab.end(), [](auto& a, auto& b){
        return a.second < b.second;
    });
    
    int out = 0, last = 0;
    for(auto& i : ab){
        if(i.first >= last){
            out++;
            last = i.second;
        }
    }

    cout << out << endl;

    return 0;
}