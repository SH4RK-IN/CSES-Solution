#include <iostream>
using namespace std;

bool test_case(){
    int n, a, b;
    cin >> n >> a >> b;
    int tie = n - a - b; 

    if(tie < 0) return false;
    n -= tie;
    if(n < 0) return false;
    if(n>= 1 && (a == n || b == n)) return false;

    cout << "YES" << endl;

    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    for(int i = n+1; i <= n+tie; i++){
        cout << i << " ";
    }

    cout << endl;

    for(int i = 1; i <= n; i++){
        int x = i + a;
        if(x > n){
            x -= n;
        }
        cout << x << " ";
    }
    for(int i = n+1; i <= n + tie; i++){
        cout << i << " ";
    }
    cout << endl;

    return true;
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        if(!test_case()){
            cout << "NO" << endl;
        }

    }

    return 0;
}