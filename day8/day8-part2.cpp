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


    for(int i = 1; i < v.size()-1; i++){
        for(int  j = 1 ;j < v[0].size()-1; j++){
            int tmp;
            int count  = 0;

            for(int k = i-1; k >=0; k--){
                if(v[i][j] > v[k][j]) count++;
                else{
                    count++;
                    break;
                }

            }
            tmp = count;
            count  = 0;

            for(int k = i+1; k < v.size(); k++){
                if(v[i][j] > v[k][j]) count++;
                else{
                    count++;
                    break;
                }
            }
            tmp *= count;
            count  = 0;

            for(int k = j-1; k >=0; k--){
                if(v[i][j] > v[i][k]) count++;
                else{
                    count++;
                    break;
                }
            }
            tmp *= count;
            count  = 0;
            for(int k = j+1; k < v.size(); k++){
                if(v[i][j] > v[i][k]) count++;
                else{
                    count++;
                    break;
                }
            }
            tmp *= count;
            count  = 0;

            ans = max(ans, tmp);

        }
    }

    cout<<ans<<endl;


    return 0;
}