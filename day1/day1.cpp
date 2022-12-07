#include <bits/stdc++.h>
using namespace std;

int main(){
    int ans = 0;

    int input;
    string s;
    int tmp = 0;

    vector<int> total;

    while(getline(cin, s)){

        
        if(s == ""){
            // ans = max(ans, tmp);
            total.push_back(tmp);
            tmp = 0;
            // cout<< ans<<endl;
        }
        else{
            tmp += stoi(s);


        }

    }

    if(tmp > 0) total.push_back(tmp);


    sort(total.rbegin(), total.rend());

    for (auto e :  total) cout<< e<<endl;

    cout<<total[0]+total[1]+total[2]<<endl;

    return 0;

}
