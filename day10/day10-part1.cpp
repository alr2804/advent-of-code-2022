#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 1, cycle = 0;
    string input;
    int n;
    int ans = 0;

    while(cin>>input){
        
        cycle++;
        if((cycle - 20) % 40 == 0) {
            // x *= cycle;
            ans += x * cycle;
            // cout<<x<<endl;
        }
        if(input == "addx"){
            cin >> n;
            cycle++;
            if((cycle - 20) % 40 == 0) {
            ans += x * cycle;
        }
            x += n;

        }

    }
    cout<<ans<<endl;


    return 0;

}