// TLE
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    list<int> circle;
    for(int i = 1; i <= n; i++) circle.push_back(i);

    auto i = circle.begin();
    while(!circle.empty()){
        for(int j = 0; j < k; j++){
            i++;
            if(i == circle.end()) i = circle.begin();
        }

        cout << *i << " ";
        i = circle.erase(i);
        if(i == circle.end() && !circle.empty()) i = circle.begin();
    }
    
    return 0;
}