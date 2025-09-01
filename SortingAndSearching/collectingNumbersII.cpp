#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> numbs(n+1), position(n+1);

    for(int i = 1; i<=n; i++){
        cin >> numbs[i];
        position[numbs[i]] = i;
    }

    int round = 1;
    for(int i = 1; i < n; i++) if(position[i] > position[i+1]) round++;

    int l, r;
    set<pair<int, int>> updates;
    while(m--){
        cin >> l >> r;

        if(numbs[l]+1 <= n) updates.insert({numbs[l], numbs[l]+1});
        if(numbs[l]-1 >= 1) updates.insert({numbs[l]-1, numbs[l]});
        if(numbs[r]+1 <= n) updates.insert({numbs[r], numbs[r]+1});
        if(numbs[r]-1 >= 1) updates.insert({numbs[r]-1, numbs[r]});

        for(auto i : updates) if(position[i.first] > position[i.second]) round--; 

        swap(position[numbs[l]], position[numbs[r]]);
        swap(numbs[l], numbs[r]);

        for(auto i : updates) if(position[i.first] > position[i.second]) round++; 
        cout << round << endl;
        updates.clear();
    }

    return 0;
}