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


    int ans = 0;
    ans += v[0].size()*2;
    ans += (v.size()-2)*2;

    for(int i = 1; i< v.size()-1; i++){
        for(int  j = 1 ;j < v[0].size()-1; j++){
            int top=0, bot=0, left=0, right=0;
            for(int k = 0; k < i; k++){
                top = max(top, v[k][j]);
            }
            if(top < v[i][j]){
                ans++;
                // cout<<v[i][j]<<" ";
                continue;
                
            }
            for(int k = i+1; k < v.size(); k++){
                bot = max(top, v[k][j]);
            }
            if(bot < v[i][j]){
                ans++;
                // cout<<v[i][j]<<" ";
                continue;
            }

            for(int k = 0; k < j; k++){
                right = max(right, v[i][k]);
            }
            if(right < v[i][j]){
                ans++;
                // cout<<v[i][j]<<" ";
                continue;
            }
            for(int k = j+1; k < v[0].size(); k++){
                left = max(left, v[i][k]);
            }
            if(left < v[i][j]){
                ans++;
                // cout<<v[i][j]<<" ";
                continue;
            }
            
            // cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<ans<<endl;


    return 0;
}