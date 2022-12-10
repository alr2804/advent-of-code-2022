#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 9;
    vector <stack<char>> v(n);
    string s;

    for (int i = 0; i<n; i++){
        getline(cin, s);
        // cout<<s<<endl;

        stringstream ss(s);
        int index;
        char element;
        ss >> index;
        while(ss >> element){
            v[index-1].push(element);
        }
    }

    int q, start, finish;

    while(scanf("move %d from %d to %d\n", &q, &start, &finish)== 3){

        // cout<<q<<start-1<<finish-1<<endl;
        while(q--){
            v[finish-1].push(v[start-1].top());
            v[start-1].pop();
        }
    }


    for (int  i = 0; i < n; i++){
        
        while(v[i].size() > 0){
            cout<<v[i].top()<<" ";
            v[i].pop();
        }
        cout<<endl;
    }





    return 0;
}