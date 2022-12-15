#include<bits/stdc++.h>
using namespace std;

vector<vector<long long>> monkeys;
vector<long long> movements(8, 0);
void init(){
    monkeys.push_back({62, 92, 50, 63, 62, 93, 73, 50});
    monkeys.push_back({51, 97, 74, 84, 99});
    monkeys.push_back({98, 86, 62, 76, 51, 81, 95});
    monkeys.push_back({53, 95, 50, 85, 83, 72});
    monkeys.push_back({59, 60, 63, 71});
    monkeys.push_back({92, 65});
    monkeys.push_back({78});
    monkeys.push_back({84, 93, 54});


}

void round(){
    for (auto &e : monkeys[0]){
        e *= 7;
        // e /=3;
        if( e % 2 == 0) monkeys[7].push_back(e);
        else monkeys[1].push_back(e);
        movements[0]++;
    }
    monkeys[0].clear();

    for (auto &e : monkeys[1]){
        e += 3;
        // e /=3;
        if( e % 7 == 0) monkeys[2].push_back(e);
        else monkeys[4].push_back(e);
        movements[1]++;
    }
    monkeys[1].clear();

    for (auto &e : monkeys[2]){
        e += 4;
        // e /=3;
        if( e % 13 == 0) monkeys[5].push_back(e);
        else monkeys[4].push_back(e);
        movements[2]++;
    }
    monkeys[2].clear();

    for (auto &e : monkeys[3]){
        e += 5;
        // e /=3;
        if( e % 19 == 0) monkeys[6].push_back(e);
        else monkeys[0].push_back(e);
        movements[3]++;
    }
    monkeys[3].clear();

    for (auto &e : monkeys[4]){
        e *= 5;
        // e /=3;
        if( e % 11 == 0) monkeys[5].push_back(e);
        else monkeys[3].push_back(e);
        movements[4]++;
    }
    monkeys[4].clear();

    for (auto &e : monkeys[5]){
        e *= e;
        // e /=3;
        if( e % 5 == 0) monkeys[6].push_back(e);
        else monkeys[3].push_back(e);
        movements[5]++;
    }
    monkeys[5].clear();

    for (auto &e : monkeys[6]){
        e += 8;
        // e /=3;
        if( e % 3 == 0) monkeys[0].push_back(e);
        else monkeys[7].push_back(e);
        movements[6]++;
    }
    monkeys[6].clear();

    for (auto &e : monkeys[7]){
        e += 1;
        // e /=3;
        if( e % 17 == 0) monkeys[2].push_back(e);
        else monkeys[1].push_back(e);
        movements[7]++;
    }
    monkeys[7].clear();

}

int main(){
    init();
    int n = 10000;

    while(n--) round();

    sort(movements.rbegin(), movements.rend());
    
    for (auto e : movements){
        cout<<e << endl;
    }
    cout<<1LL* movements[0]*movements[1]<<endl;




    return 0;
}