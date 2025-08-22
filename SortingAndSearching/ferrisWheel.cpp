#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, x;
    cin >> n >> x;
    vector<int> p(n);
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    sort(p.begin(), p.end());

    int out = 0, i = n-1, j = 0;
    while(j <= i){
        if(p[i] + p[j] <= x){
            j++;
        }
        out++;
        i--;
    }
    
    cout << out;

    return 0;
}