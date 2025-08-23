#include <iostream>
#include <set>
#define int long long
using namespace std;

long long INF = 10e9 + 3;

signed main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    multiset<int> h;
    for(int i = 1; i <= n; i++){
        int temp;
        cin >> temp;
        h.insert(temp);
    }

    for(int i = 0; i < m; i++){
        int temp;
        cin >> temp;

        auto it = h.upper_bound(temp);
        if(it == h.begin()){
            cout << -1 << endl;
        }
        else{
            it--;
            cout << *it << endl;
            h.erase(it);
        }
    }

    return 0;
}