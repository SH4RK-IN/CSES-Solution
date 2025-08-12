#include <iostream>
#include <vector>
#define int long long 
using namespace std;

signed main(){
    int n;
    cin >> n;
    vector<int> a(n+1, 0);

    int total;
    int min;
    for(int k = 1; k <= n; k++){
        total = ((k*k)*((k*k)-1))/2;
        min = 4*(k-1)*(k-2);
        a[k] = total - min;
    }

    for(int i = 1; i <= n; i++){
        cout << a[i] << endl;
    }

    return 0;
}