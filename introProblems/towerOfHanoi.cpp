#include <iostream>
#include <vector>
using namespace std;

void hanoi(vector<pair<int,int>>& move, const int& n, const int& start, const int& end){
    if(n == 1){
        move.push_back({start ,end});
    }
    else{
        int other = 6 - (start + end);
        hanoi(move, n-1, start, other);
        move.push_back({start, end});
        hanoi(move, n-1, other, end);
    }
}

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> move;
    hanoi(move, n, 1, 3);

    cout << move.size() << endl;

    for(auto i : move){
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
