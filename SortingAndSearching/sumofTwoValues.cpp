#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i+1;
    }
    sort(a.begin(), a.end());

    int i = 0, j = n-1;
    while(i < j){
        int temp = a[i].first + a[j].first;
        if(temp == x){
            cout << a[i].second << " " << a[j].second << endl;
            return 0;
        }
        else if(temp < x){
            i++;
        }
        else{
            j--;
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}