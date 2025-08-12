#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(){
    string a;
    cin >> a;

    unordered_map<char, int> count;
    for(char& c : a){
        count[c]++;
    }

    int odd_count = 0;
    char odd_char;
    for(auto& [c, f] : count){
        if(f % 2 != 0){
            odd_count++;
            odd_char = c;
        }
    }

    if(odd_count > 1){
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string mid = "", first_half = "";

    for(char c = 'A'; c<= 'Z'; c++){
        int f = count[c];
        if(f % 2 != 0){
            mid = string(1, c);
        }
            first_half += string(f/2, c);
    }

    string second_half = first_half;
    reverse(second_half.begin(), second_half.end());

    cout << first_half << mid << second_half << endl;

    return 0;
}