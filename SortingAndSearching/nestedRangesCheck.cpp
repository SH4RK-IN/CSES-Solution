#include <bits/stdc++.h>
using namespace std;

struct Range{
    int l, r, contains = 0, contained = 0, index = 0;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Range> range(n);
    for(int i = 0; i < n; i++){
        cin >> range[i].l >> range[i].r;
        range[i].index = i;
    }

    sort(range.begin(), range.end(), [](Range& a, Range& b){
        if(a.l == b.l) return a.r > b.r;
        return a.l < b.l;
    });

    int max = range[0].r;
    for(int i = 1; i < n; i++){
        if(range[i].r <= max) range[i].contained = 1;
        else max = range[i].r;
    }

    int min = range[n-1].r;
    for(int i = n-2; i >= 0; i--){
        if(range[i].r >= min) range[i].contains = 1;
        else min = range[i].r;
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

// 1 6
// 2 4
// 3 6
// 4 8

// [1----------------6]
//   [2---4]
//     [3------------6]   
//        [4----------------8]


// 2 4
// 3 6
// 1 6
// 4 8

//   [2---4]
//     [3------------6]   
// [1----------------6]
//        [4----------------8]