#include <iostream>
#include <climits>
#include <vector>
#define int long long
using namespace std;

int out = LONG_LONG_MAX;

void solve(const int& id, const int& sum1, const int& sum2, const vector<int>& p){
    if(id == (int)p.size()){
        out = min(out, abs(sum1 - sum2));
        return;
    }

    solve(id+1, sum1 + p[id], sum2, p);
    solve(id+1, sum1, sum2 + p[id], p);
    return;
}

signed main(){
    int n;
    cin >> n;

    vector<int> p(n);
    for(int i = 0; i < (long long)p.size(); i++){
        cin >> p[i];
    }

    solve(0, 0, 0, p);

    cout << out;

    return 0;
}