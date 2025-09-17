#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    vector<int> sum(N);
    int perfix_sum = 0;
    sum[0] = 1;
    for(int i = 0; i < N ; i++){
        int temp; cin >> temp;
        perfix_sum += temp;
        sum[(perfix_sum % N + N) % N]++;
    }

    int ans = 0;
    for(int i : sum){
        ans += (i*(i-1))/2;
    }   

    cout << ans << endl;

    return 0;
}