#include <bits/stdc++.h>

using namespace std;
int n;
stack <int> s;



int main() {
cin>>n;

for(int i=0;i<n;i++){
    string command;
    cin>>command;

if(command=="push") {
    int j;
    cin>>j;
    s.push(j);
}
else if(command=="size") {
    cout<<s.size()<<"\n";
}
else if(command=="pop") {
    int v=s.top();
    s.pop();
    cout<<v<<"\n";
}
else if(command=="empty") {
    if(s.empty()) cout<<1<<"\n";
    else cout<<0<<"\n";
}
else {
    cout<<s.top()<<"\n";
}
}
return 0;
}