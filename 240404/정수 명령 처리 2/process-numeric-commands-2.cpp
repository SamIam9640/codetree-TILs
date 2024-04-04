#include <bits/stdc++.h>
using namespace std;
int n;
queue<int> q;
int main() {
cin>>n;

for(int i=0;i<n;i++){
    string command;
    cin>>command;

    if(command=="push") {
        int n;
        cin>>n;
        q.push(n);
    }
    if(command=="pop") {
        int v=q.front();
        q.pop();
        cout<<v<<"\n";
    }
    if(command=="front") {
        cout<<q.front()<<"\n";
    }
    if(command=="size"){
        cout<<q.size()<<"\n";
    }
    else {
        if(q.empty()) {
            cout<<"1";
        }
        else {cout<<"0";}
    }
}
return 0;
}