#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    vector<vector<int>> v;

    while(cin>>s){
        vector<int> tmp;
        for(char e : s){
            tmp.push_back(e - '0');
        }
        v.push_back(tmp);
    }
    // cout<<v[0].size()<< " "<<v.size()<<endl;
    // for(auto el : v){
    //     for(auto e : el) cout<<e;
    //     cout<<endl;
    // }

    vector<vector<int>> top = v;
    vector<vector<int>> bot = v ;
    vector<vector<int>> right =v;
    vector<vector<int>> left =v;
    
    // for(auto e : v) top.push_back(e);
    // for(auto e : v) bot.push_back(e);

    
    for(int i = 1; i < v.size(); i++){
        for(int j = 1; j < v[0].size(); j++){
            top[i][j] = max(top[i][j], top[i-1][j]);
        }
    }

    for(int i = v.size()-2; i >=0; i--){
        for(int j = v[0].size()-2; j >= 0; j--){
            bot[i][j] = max(bot[i][j], bot[i+1][j]);
        }
    }

    for(int i = 1; i < v.size(); i++){
        for(int j = 1; j < v[0].size(); j++){
            left[i][j] = max(left[i][j], left[i][j-1]);
        }
    }
    for(int i = 1; i < v.size(); i++){
        for(int j = v.size()-2; j >=0; j--){
            right[i][j] = max(right[i][j], right[i][j+1]);
        }
    }

    // for(auto el : top){
    //     for(auto e : el) cout<<e;
    //     cout<<endl;
    // }




    int ans = 0;
    ans += v[0].size()*4 - 4;

    for(int i = 1; i < v.size()-1; i++){
        for(int  j = 1 ;j < v[0].size()-1; j++){
            
            if(top[i-1][j] < v[i][j] || bot[i+1][j] < v[i][j] ||left[i][j-1] < v[i][j] || right[i][j+1] < v[i][j]){
                ans++;
            }
        }
    }

    cout<<ans<<endl;


    return 0;
}