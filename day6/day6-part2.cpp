#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool ans = false;

    for(int i = 0; i < s.size()-14; i++){
        map<char, int> tmp;
        ans = true;
        for (int j = 0; j < 14; j++){
            tmp[s[i+j]]++;
            // cout<<tmp[s[i+j]]<<endl;
            if(tmp[s[i+j]] > 1){
                ans = false;
                break;
            }
        }
        if(ans) {
            cout<<i+14<<endl;
            break;
        }
    }


    return 0;
}