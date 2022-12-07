#include<bits/stdc++.h>
using namespace std;

main(){
    long long ans = 0;
    string s1, s2, s3;
    while(cin>>s1){
        cin>>s2;
        cin>>s3;
        set<char> set1;
        set<char> set2;
        set<char> set3;

        for(char e: s1)set1.insert(e);
        for(char e: s2)set2.insert(e);
        for(char e: s3)set3.insert(e);

        for (auto e : set1){
            if(set2.count(e)>0 && set3.count(e)>0){
                if(e > 96)ans += e-96;
                else ans += e-38;
            }
        }


    }
        cout<<ans<<endl;


    return 0;
}