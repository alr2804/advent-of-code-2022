#include <bits/stdc++.h>
using namespace std;

int main(){
    int points = 0;
    char a, b;

    while(cin>> a){
        cin>>b;
        if(b == 'Y') b = a;
        else if(a == 'A'){
            if(b == 'X') b='C';
            else if(b == 'Z') b = 'B';
        }
        else if(a == 'B'){
            if(b == 'X') b='A';
            else if(b == 'Z') b = 'C';
        }
        //a == C
        else{
            if(b == 'X') b='B';
            else if(b == 'Z') b = 'A';
        }
        
        
        if(a == b) points +=3;
        if( b == 'A'){
            points += 1;
            if(a == 'C') points +=6;
        }
        else if( b=='B'){
            points+=2;
            if(a == 'A')points +=6;
        }
        else {
            points +=3;
            if(a == 'B')points +=6;
        }


    }
    
    cout<<points;


    return 0;
}