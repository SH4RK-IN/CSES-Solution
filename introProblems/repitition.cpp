#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    cin >> a;

    int max_count = 1, current = 1;

    for(int i = 1; i < a.size(); i++){
        if(a[i] == a[i-1]){
            current++;
            max_count = max(max_count, current);
        }
        else{
            current = 1;
        }
    }

    cout << max_count;

    return 0;
}