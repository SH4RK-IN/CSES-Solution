#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 0, i = 0, j = 0;
    while(i < n && j < m){
        if(b[j] > a[i] + k){
            i++;
        }
        else if(b[j] < a[i] - k){
            j++;
        }
        else{
            i++;
            j++;
            ans++;
        }
    }

    cout << ans << endl;;

    return 0;
}