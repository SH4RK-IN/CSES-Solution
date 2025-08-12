#include <iostream>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> sets;
    long long n;
    cin >> n;
    for(int i {0}; i < n; i++){
        int x;
        cin >> x;
        sets.insert(x);
    }
    cout << sets.size();
}