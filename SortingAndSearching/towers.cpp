#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> k(n);
    for(int i = 0; i < n; i++) cin >> k[i];

    multiset<int> tower;
    for(auto i : k){
        auto it = tower.upper_bound(i);
        if(it != tower.end()){
            tower.erase(it);
        }

        tower.insert(i);
    }
    
    cout << tower.size() << endl;

    return 0;
}