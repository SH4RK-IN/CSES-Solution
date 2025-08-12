#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int result = 0;

void search(const long long int& x, const long long int& y, vector<long long int>& V){
    int l = 0;
    int r = V.size() - 1;
    for(l < r){
        int mid = (l+r)/2;
        if(x)
    }
}

void check(const long long int& A, const long long int& K, vector<long long int>& V){
    int small = A - K;
    int large = A + K;


}

int main(){
    long long int n,m,k;
    cin >> n; //Applicant No.
    cin >> m; //Apartment No.
    cin >> k; //Allowed difference
    
    vector<long long int> a; //Applicants vector
    for(int i {0}; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    vector<long long int> b; //Apartment vector
    for(int i {0}; i < m; i++){
        int x;
        cin >> x;
        b.push_back(x);
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int i = 0; i < n; i++){
        check(a[i], k, b); // require, difference, appartment available vector
    }
    cout << result;
}