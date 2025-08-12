#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;

signed main(){
    string n;
    cin >> n;
    sort(n.begin(), n.end());
    
    vector<string> out;
    do{
        out.push_back(n);
    }while(next_permutation(n.begin(),n.end()));

    cout << out.size() << endl;

    for(string i : out){
            cout << i << endl;
    }

    return 0;
}