#include <iostream>
#include <vector>
#define int long long
using namespace std;

int total_sum = 0;
int mid;

bool check(int& n){
    total_sum = 0;
    for(int i = 1; i <= n; i++){
        total_sum += i;
    }
    if(total_sum % 2 == 0){
        mid = total_sum / 2;
        return true;
    }
    else{
        return false;
    }
}

int vector_sum;
void vector_add(vector<int>& a){

}

signed main(){
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;

    if(check(n)){
        int sum_a = 0;
        for(int i = n; i > 0; i--){  
            if(sum_a + i <= mid){
                a.push_back(i);
                sum_a += i;
            }
            else{
                b.push_back(i);
            }  
        }

        cout << "YES" << endl;
        cout << a.size() << endl;
        for(int p : a){
            cout << p << " ";
        }
        cout << endl;
        cout << b.size() << endl;
        for(int p : b){
            cout << p << " ";
        }
        cout << endl;

    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}