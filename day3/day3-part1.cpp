#include<bits/stdc++.h>
using namespace std;

main(){
    long long ans = 0;
    string s;
    while(cin>>s){
        set<char> s1;
        set<char> s2;

        for(int i = 0; i< s.size()/2; i++){
            s1.insert(s[i]);
        }
        for(int i = s.size()/2; i< s.size(); i++){
            s2.insert(s[i]);
        }

        for (auto e : s1){
            if(s2.count(e)>0){
                if(e > 96)ans += e-96;
                else ans += e-38;
            }
        }


    }
        cout<<ans<<endl;


    return 0;
}