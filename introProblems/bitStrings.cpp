#include <iostream>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;

int two_power(int& n){
    int x = 1;
    for(int i = 0; i < n; i++){
        x = (x*2) % MOD;
    }
    return x;
}

signed main(){
    int n;
    cin >> n;

    cout << two_power(n);

    return 0;
}