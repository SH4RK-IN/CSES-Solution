#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n), position(n+1, 0);
    for(int i = 0; i<n; i++){
        cin >> a[i];
        position[a[i]] = i;
    }

    int round = 1;
    for(int i = 0; i < n; i++){
        if(position[i] > position[i+1]) round++;
    }
    
    cout << round << endl;

    return 0;
}