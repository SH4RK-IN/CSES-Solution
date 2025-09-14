#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<vector<int>> timing(n, vector<int>(3));
    for(int i = 0; i < n; i++){
        cin >> timing[i][0] >> timing[i][1];
        timing[i][2] = i;
    }

    sort(timing.begin(), timing.end());

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> occupiedRoom; //deparcher time, room no.
    int roomCnt = 0;
    vector<int> out(n);
    for(int i = 0; i < n; i++){
        if(occupiedRoom.empty() || timing[i][0] <= occupiedRoom.top().first){
            roomCnt++;
            occupiedRoom.push({timing[i][1], roomCnt});
            out[timing[i][2]] = roomCnt;
        }
        else{
            int roomNumb = occupiedRoom.top().second;
            occupiedRoom.pop();

            occupiedRoom.push({timing[i][1], roomNumb});
            out[timing[i][2]] = roomNumb;
        }
    }

    cout << roomCnt << endl;
    for(int i : out){
        cout << i << " ";
    }

    return 0;
}