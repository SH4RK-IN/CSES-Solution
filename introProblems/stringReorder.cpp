#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
         
    vector<int> freq(26);
    for(int i : s){
        freq[i - 'A']++;
    }

    string out;
    while((int)out.size() < n){
        bool anything = false;
        for(int i = 0; i < 26; i++){
            if(freq[i] > 0 && (out.empty() || out.back() != ('A' + i))){
                freq[i]--;
                out += 'A' + i;

                int suffix = n - out.size();
                bool can_finish = true;
                for(int j = 0; j < 26; j++){
                    if(i != j){
                        if(freq[j] > (suffix+1)/2){
                            can_finish = false;
                            break;
                        }
                    }
                    else{
                        if(freq[j] > suffix/2){
                            can_finish = false;
                            break;
                        }
                    }
                }
                if(can_finish){
                    anything = true;
                    break;
                }
                else{
                    freq[i]++;
                    out.pop_back();
                }
            }
        }
        if(!anything){
            break;
        }
    }
    if(out.empty()){
        cout << "-1" << endl;
    }
    else{
        cout << out << endl;
    }

    return 0;
}