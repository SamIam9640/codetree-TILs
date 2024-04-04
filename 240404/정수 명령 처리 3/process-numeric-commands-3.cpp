#include<bits/stdc++.h>
using namespace std;

int n;
deque<int> d;

int main() {
    cin>>n;

    for(int i=0;i<n;i++){
        string command;
        cin>>command;

        if(command=="push_front") {
            int t;
            cin>>t;
            d.push_front(t);
        }
        else if(command=="push_back") {
            int n;
            cin>>n;
            d.push_back(n);
        }
        else if(command=="pop_front") {
            int v=d.front();
            d.pop_front();
            cout<<v<<"\n";
        }
        else if(command=="pop_back"){
            int v=d.back();
            d.pop_back();
            cout<<v<<"\n";
        }
        else if(command=="size"){
            cout<<d.size()<<"\n";
        }
        else if(command=="empty"){
            if(d.empty()) cout<<"1"<<"\n";
            else cout<<"0"<<"\n";
        }
        else if(command=="front"){
            cout<<d.front()<<"\n";
        }
        else {
            cout<<d.back()<<"\n";
        }
    }
    return 0;
}