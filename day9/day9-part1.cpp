#include <bits/stdc++.h>
using namespace std;

int main(){
    bool arr[1200][1200];
    memset(arr, sizeof(arr), 0);

    pair<int, int> head;
    pair<int, int> tail;
    head = {500, 500};
    tail = {500, 500};

    arr[tail.first][tail.second] = true;
    int ans = 1;

    char c;
    int n;

    vector<pair<int, int>> moves = {{-1, 0}, {0, 1}, {1, 0}, {0,-1}};

    while(cin >> c>>n){
        pair<int, int> movement;
        if(c == 'U') movement = moves[0];
        if(c == 'R') movement = moves[1];
        if(c == 'D') movement = moves[2];
        if(c == 'L') movement = moves[3];

        for (int i  = 0; i< n; i++){
            pair<int, int> tmp = head;
            head.first += movement.first;
            head.second += movement.second;

            if( abs(head.first - tail.first) >1 || abs(head.second - tail.second) >1){
                tail = tmp;
                if(! arr[tail.first][tail.second]){
                    arr[tail.first][tail.second] = true;
                    ans++;
                }
            }
            // cout<< head.first<<"  "<<head.second<<endl;
        }

    }
        cout<< ans<<endl;

    return 0;
}