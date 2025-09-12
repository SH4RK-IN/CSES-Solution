#include <bits/stdc++.h>
using namespace std;

struct Range{
    int l, r, contains = 0, contained = 0, index = 0;
};


int lsb(int i){
    return i & -i;
}

void pointUpdate(int i, int x, vector<int>& bit){
    int n = bit.size() -1;
    while(i <= n){
        bit[i] += x;
        i += lsb(i);
    }
}

int perfixsum(int i, vector<int>& bit){
    int sum = 0;
    while(i > 0){
        sum += bit[i];
        i -= lsb(i);
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Range> range(n);
    vector<int> rights;
    for(int i = 0; i < n; i++){
        cin >> range[i].l >> range[i].r;
        range[i].index = i;
        rights.push_back(range[i].r);
    }
    
    // coordinate compression
    sort(rights.begin(), rights.end());
    rights.erase(unique(rights.begin(), rights.end()), rights.end());
    auto index = [&](int x){
        return int(lower_bound(rights.begin(), rights.end(), x) - rights.begin() + 1);
    };
    for(auto& i : range) i.r = index(i.r);

    sort(range.begin(), range.end(), [](Range& a, Range& b){
        if(a.l == b.l) return a.r > b.r;
        return a.l < b.l;
    });

    vector<int> bit(rights.size() + 1, 0);

    for(int i = 0; i < n; i++){
        range[i].contained = i - perfixsum(range[i].r-1, bit);
        pointUpdate(range[i].r, 1, bit);
    }

    fill(bit.begin(), bit.end(), 0);

    for(int i = n-1; i >= 0; i--){
        range[i].contains = perfixsum(range[i].r, bit);
        pointUpdate(range[i].r, 1, bit);
    }

    sort(range.begin(), range.end(), [](Range& a, Range& b){
        return a.index < b.index;
    });

    for(auto j : range){
        cout << j.contains << " ";
    }
    cout << endl;
    for(auto j : range){
        cout << j.contained << " ";
    }
    cout << endl;

    return 0;
}
