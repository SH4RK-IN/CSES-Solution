#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 1){
        cout << 1;
        return 0;
    }
    if(1 < n && n <= 3){
        cout << "NO SOLUTION"; 
        return 0;
    }

    for(int i= 2; i <= n; i+=2){
        cout << i << " ";
    }
    for(int i = 1; i <= n; i+=2){
        cout << i << " ";
    }
        
    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     if(n == 1){
//         cout << 1;
//         return 0;
//     }
//     if(1 < n && n <= 3){
//         cout << "NO SOLUTION";
//         return 0;
//     }

//     vector<int> a(n+1, -1);

//     int start = 1;
//     int mid = n/2;
//     int j = 2;
//     int k = 1;
//     for(int i = 1; i <= n; i++){
//         if(i%2 == 0){
//             a[start] = j;
//             j += 2;
//             start++;
//         }

//         else{
//             mid++;
//             a[mid] = k;
//             k += 2;
//         }
//     }

//     for(int i = 1; i < a.size(); i++){
//         cout << a[i] << " ";
//     }

//     return 0;
// }

