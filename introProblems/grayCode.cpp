#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    int result = 1 << n;

    for(int i = 0; i < result; i++){
        int gray = i ^ (i >> 1);
        bitset<32> b(gray);
        string s = b.to_string();
        cout << s.substr(32 - n) << endl;
    }

    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------
// #include <iostream>
// #include <vector>
// using namespace std;

// int sq(int& p){
//     int q = 1;
//     for(int i = 0; i < p; i++){
//         q *= 2;
//     }
//     return q; 
// }

// int main(){
//     int n;
//     cin >> n;
    
//     vector<int> s(n, 0);

//     for(int i = 0; i < n; i++){
//         cout << s[i];
//     }
//     cout << endl;

//     int square = sq(n);
//     int x = 1;
//     while(x < square){
//         for(int j = 0; j < n && x < square; j++){
//             if(s[j] == 0){
//                 s[j] = 1;
//             }
//             else{
//                 s[j] = 0;
//             }
//             for(int i = 0; i < n; i++){
//                 cout << s[i];
//             }
//             cout << endl;
//             x++;
//         }
//     }
    
//     return 0;
// }