#include <bits/stdc++.h>
using namespace std;

struct file{
    string name;
    int size;
};

struct folder {
    string name;
    int totalsize = 0;
    vector<struct file*> files;
    struct folder* parent;
    vector<struct folder*> subfolders;
    void sum(){
        int total = 0;
        for(auto e : files) total += e->size;
        for(auto e : subfolders) total += e->totalsize;
        totalsize = total;
        if(parent != NULL){
            parent->sum();
        }
    };
    void print(){
        for (auto e : subfolders)
        {
            cout<<e->name <<" "<<e->totalsize<<endl;
            if(e->subfolders.size() > 0) e->print();
        }

    };
    int solve(){
        int ans = 0;
        for (auto e : subfolders)
        {
            if(e->totalsize <= 100000) ans += e->totalsize;
            // cout<<e->name <<" "<<e->totalsize<<endl;
            if(e->subfolders.size() > 0) ans += e->solve();
        }
        return ans;

    }
};


int main(){

    folder* src = new folder();
    src->name = "/";
    src->parent = NULL;

    string input, command, dir;
    int size;
    string name;

    folder* directory = src;

    while(cin>>input){
        if(input == "$"){
            cin>>command;
            if(command == "cd"){
                cin>>dir;
                if(dir == "/") directory = src;
                else if (dir == ".."){
                    directory = directory->parent;
                }
                else {
                    for (auto e : directory->subfolders){
                        if(e->name == dir) directory = e;
                    }
                }
            }
            
        }
        //read here
        else {
            if(input == "dir"){
                cin>> dir;
                folder* tmp = new folder();
                tmp->name = dir;
                tmp->parent = directory;
                directory->subfolders.push_back(tmp);               
                // cout<< "folder " +dir<<endl;
            }
            else {
                cin >> name;

                file* tmp  = new file();
                tmp->name = name;
                tmp->size = stoi(input);
                directory->files.push_back(tmp);
                directory->sum();
                // directory->elements += stoi(input);
                // cout<< file + " file "<<input<<endl;

            }

        }

    }

    

    // cout<<src->totalsize<<endl;
    // src->print();
    cout<<src->solve()<<endl;




    return 0;
}