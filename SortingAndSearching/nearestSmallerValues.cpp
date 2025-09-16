#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> nums(n+1);
    for(int i = 1; i <= n; i++){
        cin >> nums[i];
    }

    vector<int> ans(n+1);
    stack<int> st;
    for(int i = 1; i <= n; i++){
        while(!st.empty() && nums[st.top()] >= nums[i]) st.pop();
        if(st.empty()) ans[i] = 0;
        else ans[i] = st.top();
        st.push(i);
    }

    for(int i = 1; i <= n; i++) cout << ans[i] << " ";

    return 0;
}