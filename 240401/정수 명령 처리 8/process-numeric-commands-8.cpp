#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin>>n;
    list <int> l;

    for(int i=0;i<n;i++){
    string command;
    cin>>command;

    if(command=="push_back"){
        int v;
        cin>>v;
        l.push_back(v);
    }
    else if(command=="push_front"){
        int n;
        cin>>n;
        l.push_front(n);
    }
    else if(command=="pop_front"){
        int v=l.front();
        l.pop_front();
        cout<<v<<"\n";
    }
    else if(command=="pop_back"){
        int v=l.back();
        l.pop_back();
        cout<<v<<"\n";
    }
    else if(command=="size"){
        cout<<l.size()<<"\n";
    }
    else if(command=="empty"){
        if(l.empty()) cout<<"1"<<"\n";
        else cout<<"0"<<"\n";
    }
    else if(command=="front"){
        cout<<l.front()<<"\n";
    }
    else {
        cout<<l.back()<<"\n";
    }
    }

    return 0;
}