#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 1, cycle = 0;
    string input;
    int n;
    int ans = 0;

    while(cin>>input){
        
        cycle++;

        if ( cycle >= x && cycle <= x +2 ) cout<<"#";
        else cout<<".";

        if(cycle % 40 == 0) {
            cycle = 0;
            cout<<endl;
        }
        if(input == "addx"){
            cin >> n;
            cycle++;
            if ( cycle >= x && cycle <= x +2 ) cout<<"#";
            else cout<<".";
            if(cycle % 40 == 0) {
            cycle = 0;

            cout<<endl;
        }
            x += n;

        }

    }
    // cout<<ans<<endl;


    return 0;

}