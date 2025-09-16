#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    unordered_map<int , vector<pair<int, int>>> seen;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int Twosum = nums[i] + nums[j];
            int need = target - Twosum;
            if(seen.count(need)){
                    for(auto [a, b] : seen[need]){
                        if(a != i+1 && b != j+1 && a !=j+1 && b != i+1){
                            cout << a << " " << b << " " << i+1 << " " << j+1  << endl;
                            return 0;
                        }  
                    }
            }
        }

        for(int k = 0; k < i; k++) seen[nums[i] + nums[k]].push_back({k+1, i+1});; 
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}

//--------------------------------------------------------------------------------------------------------
// wrong

// #include <bits/stdc++.h>
// #define int long long
// using namespace std;

// signed main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, target;
//     cin >> n >> target;
//     vector<pair<int, int>> nums(n);
//     for(int i = 0; i < n; i++){
//         cin >> nums[i].first;
//         nums[i].second = i+1;
//     }

//     vector<array<int, 3>> sumPair;
//     for(int i = 0; i < n; i++){
//         for(int j = i+1; j < n; j++){
//             sumPair.push_back({nums[i].first + nums[j].first, nums[i].second, nums[j].second});
//         }
//     }

//     sort(sumPair.begin(), sumPair.end(), [](auto& a, auto& b){
//         return a[0] < b[0];
//     });

//     int left = 0, right = sumPair.size()-1;
//     while(left < right){
//         int sum = sumPair[left][0] + sumPair[right][0];
//         if(sum == target){
//             int i1 = sumPair[left][1], j1 = sumPair[left][2];
//             int i2 = sumPair[right][1], j2 = sumPair[right][2];
//             if (i1 != i2 && i1 != j2 && j1 != i2 && j1 != j2) {
//                 cout << i1 << " " << j1 << " " << i2 << " " << j2 << endl;
//                 return 0;
//             }
//             left++;
//         }
        
//         else if(sum < target) left++;
//         else right--;
//     }

//     cout << "IMPOSSIBLE" << endl;
//     return 0;
// }