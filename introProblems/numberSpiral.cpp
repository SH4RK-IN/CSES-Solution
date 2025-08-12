#include <iostream>
#include <vector>
#define int long long
using namespace std;

signed main(){
    int t;
    cin >> t;
    vector<int> a(t);
    for(int i = 0; i < t; i++){
        int y, x; // y - row, x - column
        cin >> y >> x;
        
        int n = max(x, y);
        int ans;
        if(n%2 == 0){
            if(y == n){
                ans = (n*n) - x + 1;
            }
            else{
                ans = ((n-1)*(n-1)) + y;
            }
        }
        else{
            if(x == n){
                ans = (n*n) - y + 1;
            }
            else{
                ans = (n-1)*(n-1) + x;
            }
        }
        a[i] = ans;
    }

    for(int i = 0; i < a.size(); i++){
        cout << a[i] << endl;
    }

    return 0;
}