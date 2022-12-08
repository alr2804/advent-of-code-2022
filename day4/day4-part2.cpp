#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c, d;
    int ans = 0;

    while( scanf("%d-%d,%d-%d", &a, &b, &c, &d) == 4){

        // cout<<a<<b<<c<<d<<endl;

        if( (c <= b && c >= a)|| (a <= d && a>= c) )ans++;


    }
    cout<<ans<<endl;


    return 0;
}