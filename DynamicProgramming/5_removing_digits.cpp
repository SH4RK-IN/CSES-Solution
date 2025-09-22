#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> min_step(n+1, INF);
    min_step[0] = 0;
    
    for(int i = 1; i <= n; i++){
        int temp = i;
        while(temp > 0){
            min_step[i] = min(min_step[i], min_step[(i - (temp%10))]+1);
            temp /= 10;
        }
    }

    cout << min_step[n] << endl;

    return 0;
}