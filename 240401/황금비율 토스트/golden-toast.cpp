#include <bits/stdc++.h>
using namespace std;
int n,m;
string s;
int main() {
//입력
cin>>n>>m;
cin>>s;
//연결리스트 정의
list<char> l;
for(int i=0;i<s.length();i++)
l.push_back(s[i]);
//iterator 정의
list<char>::iterator it=l.end();
while(m--){
char c;
cin>>c;

if(c=='L') {
if( it !=l.begin())
it--;
}
else if(c=='P'){
char c;
cin>>c;
l.insert(it,c);
}
else if(c=='R'){
    if(it !=l.end())
    it++;
}
else if(c=='D'){
if(it!=l.end())
it=l.erase(it);
}
}
for(list<char>::iterator it=l.begin();it !=l.end();it++){
    cout<<*it;
}
return 0;
}