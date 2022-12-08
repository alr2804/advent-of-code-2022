#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c, d;
    int ans = 0;

    while( scanf("%d-%d,%d-%d", &a, &b, &c, &d) == 4){

        // cout<<a<<b<<c<<d<<endl;

        if(c>=a && c <= b && d <= b && d >= a)ans++;
        else if(a>= c && b <= d && b>= c && b <= d)ans++;



    }
    cout<<ans<<endl;


    return 0;
}