#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    string temp;

    for(int i = 0; i < n; i++){
        cin >> temp;   
        
        for(int j = 0; j < m; j++){
            if((i+j) % 2 == 0){
                temp[j] = (temp[j] == 'A') ? 'B' : 'A';
            }
            else{
                temp[j] = (temp[j] == 'C') ? 'D' : 'C';
            }
        }
        cout << temp << endl;
    }



    return 0;
}