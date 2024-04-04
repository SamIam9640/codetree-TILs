#include <bits/stdc++.h>
#define MAX_N 10000
using namespace std;
int n;
int arr[MAX_N];

string command;

int main() {
cin>>n;
int stack <int> s;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
if(command=="push") {
    int j;
    cin>>j;
    s.push();
}
else if(command=="size") {
    cout<<s.size();
}
else if(command=="pop") {
    cout<<s.pop();
}
else if(command=="empty") {
    if(!s.empty()) cout<<0;
    else cout<<1;
}
else {
    cout<<s.top();
}

cout<<arr[i]<<"\n";
return 0;
}