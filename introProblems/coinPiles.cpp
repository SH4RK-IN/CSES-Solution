#include <iostream>
#include <vector>
#include <string>
#define int long long
using namespace std;

signed main(){
    int t;
    cin >> t;
    vector<string> result(t);
    for(int i = 0; i < t; i++){
        pair<int, int> a;
        cin >> a.first;
        cin >> a.second;

        if((a.first + a.second) % 3 == 0 && min(a.first,a.second) * 2 >= max(a.first, a.second)){
            result[i] = "YES";
        }
        else{
            result[i] = "NO";
        }
    }

    for(auto i : result){
        cout << i << endl;
    }

    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------

// #include <iostream>
// #include <vector>
// #include <string>
// #define int long long
// using namespace std;

// signed main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     vector<string> result(t);
    
//     for(int i = 0; i < t; i++){
//         pair<int,int> a;
//         cin >> a.first;
//         cin >> a.second;
        
//         int large;
//         if(a.first > a.second){
//             large = a.first;
//         }
//         else{
//             large = a.second;
//         }

//         int p  = 0;
//         while(a.first != 0 && a.second != 0 && p <= large){
//             p++;
//             if(a.first > a.second){
//                 a.first -= 2;
//                 a.second -= 1;
//             }
//             else{
//                 a.second -= 2;
//                 a.first -= 1;
//             }
//         }  
        
//         if(a.first == 0 && a.second == 0){
//             result[i] = "YES";
//         }
//         else{
//             result[i] = "NO";
//         }
           

//     }

//     for(string i : result){
//         cout << i << endl;
//     }

//     return 0;
// }